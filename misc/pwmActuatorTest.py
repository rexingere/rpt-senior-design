import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setup(12,GPIO.OUT) # PWM0: GPIO Pin 12
GPIO.setup(13,GPIO.OUT) # PWM1: GPIO Pin 13
GPIO.setup(5, GPIO.OUT) # DIR1: GPIO Pin 5
GPIO.setup(6, GPIO.OUT) # DIR2: GPIO Pin 6
m1 = GPIO.PWM(12, 1000) # init actuator1 to pin 12, 1kHz
m2 = GPIO.PWM(13, 1000)
GPIO.output(5, GPIO.HIGH) # init both motors to reverse
GPIO.output(6, GPIO.HIGH)

fwdSpd = 75
revSpd = 75

print("\nInitializing PWM test...\n")

# Default duty cycles
m1.start(0) # init motors to no movement
m2.start(0)

print("Beginning. Press Ctrl+C to exit.\n")
time.sleep(3)

# Handle exceptions
try:
    # Loop indefinitely
    while True:
        # Let's start by zeroing both motors. Reverse for 5 seconds
        m1.ChangeDutyCycle(revSpd)
        m2.ChangeDutyCycle(revSpd)
        print("\nReverse.")
        time.sleep(5)
        m1.ChangeDutyCycle(0)
        m2.ChangeDutyCycle(0)
        print("\nStop")
        time.sleep(5)
        
        # Now forward for 5 seconds
        GPIO.output(5, GPIO.LOW)
        GPIO.output(6, GPIO.LOW)
        m1.ChangeDutyCycle(fwdSpd)
        m2.ChangeDutyCycle(fwdSpd)
        print("\nForward.")
        time.sleep(5)
        m1.ChangeDutyCycle(0)
        m2.ChangeDutyCycle(0)
        GPIO.output(5, GPIO.HIGH)
        GPIO.output(6, GPIO.HIGH)
        print("\nStop")
        time.sleep(5)
            
except KeyboardInterrupt:
    print("\nExiting...\n")
except:
    print("\nAn error occurred.\n")

GPIO.output(5, GPIO.LOW)
GPIO.output(6, GPIO.LOW)
m1.stop()
m2.stop()
GPIO.cleanup()