import RPi.GPIO as GPIO
import time
import board
import busio
import adafruit_ads1x15.ads1115 as ADS
from adafruit_ads1x15.analog_in import AnalogIn

# ---------------------- ADC Config ------------------------- #
i2c = busio.I2C(board.SCL, board.SDA)
ads = ADS.ADS1115(i2c)
chan1 = AnalogIn(ads,ADS.P0) # Channel 1 = pin0 of ADC
chan2 = AnalogIn(ads,ADS.P1) # Channel 2 = pin1 of ADC
ch1VMax = 3.84 # Max output voltage for Channel 1
ch1VMin = 0.24 # Min output voltage for Channel 1
ch1Abs = ch1VMax - ch1VMin # Absolute positional voltage for Channel 1
ch2VMax = 3.84 # Max output voltage for Channel 2
ch2VMin = 0.24 # Min output voltage for Channel 2
ch2Abs = ch2VMax - ch2VMin # Absolute positional voltage for Channel 2


# ------------------- Motor Driver Config ------------------- #
GPIO.setmode(GPIO.BCM)
GPIO.setup(12,GPIO.OUT) # PWM0: GPIO Pin 12
GPIO.setup(13,GPIO.OUT) # PWM1: GPIO Pin 13
GPIO.setup(5, GPIO.OUT) # DIR1: GPIO Pin 5
GPIO.setup(6, GPIO.OUT) # DIR2: GPIO Pin 6
m1 = GPIO.PWM(12, 1000) # Initialize actuator1 to pin 12, 1kHz
m2 = GPIO.PWM(13, 1000)
GPIO.output(5, GPIO.HIGH) # Initialize both motors to reverse
GPIO.output(6, GPIO.HIGH)
fwdSpd = 75 # Default speed for forward motion (extension)
revSpd = 75 # Default speed for reverse motion (retraction)
m1.start(0) # Initialize both motors to no movement (0Hz PWM)
m2.start(0)

# ----------------------------------------------------------- #
# -------------------- Usable functions --------------------- #
# ----------------------------------------------------------- #

# Accepts actuator number (0 or 1) as input
# Returns current position of requested actuator as percentage 0-100
def getPos(acNo):
    if acNo == 0:
        v1 = chan1.voltage # Retrieve ADC voltage output for Channel 1
        v1 = v1 - ch1VMin # Calculate absolute voltage of Channel 1
        pos = (v1/ch1Abs) * 100 # Calculate percentage position of actuator 1
        print("{:>5.3f}".format(pos))
        return pos
    elif acNo == 1:
        v2 = chan2.voltage # Retrieve ADC voltage output for Channel 2
        v2 = v2 - ch2VMin # Calculate absolute voltage of Channel 1
        pos = (v2/ch2Abs) * 100 # Calculate percentage position of actuator 1
        return pos
    else:
        return -1 # Invalid actuator number entered, return error code -1

# Accepts actuator number (0 or 1) and desired position percentage(dPos) as inputs
# Returns 1 for success and -1 for failure
def setPos(acNo, dPos):
    # Validate inputs
    # Position 0<=dPos<=100
    if dPos < 0 or dPos > 100:
        print("Desired position (arg2) out of bounds (0->100)\n")
        return -1 # Return error code, out of pounds dPos
    # Actuator number acNo == 0 || 1
    if acNo == 0:
        mc = m1 # Set current motor (mc) to motor 1 (m1)
        cChan = chan1 # Set current ADC channel (cChan) to Channel 1
        print("Actuator 1 selected")
    elif acNo == 1:
        mc = m2 # Set current motor (mc) to motor 2 (m2)
        cChan = chan2 # Set current ADC channel (cChan) to Channel 2
        print("Actuator 2 selected")
    else:
        print("Invalid actuator number. Specify actuator 1 or 2 for arg1")
        return -1 # Invalid actuator number entered, return error code -1
    
    # Condition curPos < dPos: increase curPos to match
    if getPos(acNo) < dPos - 1:
        n = 4
        #while getPos(acNo) < dPos - 1:
        while n:
            GPIO.output(5, GPIO.LOW) # set motors to forward
            GPIO.output(6, GPIO.LOW)
            mc.ChangeDutyCycle(fwdSpd)
            time.sleep(4)
            print(n)
            n-=1
            
        mc.ChangeDutyCycle(0) # Stop motor upon reaching desired position
        print("end of increase")
    
    # Condition curPos > dPos: decrease curPos to match
    if getPos(acNo) > dPos + 1:
        n = 4
        #while getPos(acNo) > dPos + 1:
        while n:
            GPIO.output(5, GPIO.HIGH) # set motors to reverse
            GPIO.output(6, GPIO.HIGH)
            mc.ChangeDutyCycle(revSpd)
            time.sleep(4)
            print(n)
            n -= 1
            
        mc.ChangeDutyCycle(0)
        print("end of decrease")
    
