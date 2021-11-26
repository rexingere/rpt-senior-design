import RPi.GPIO as GPIO
import time

#Reference pins by number
GPIO.setmode(GPIO.BOARD)
#Set pin 12 mode to output
GPIO.setup(12, GPIO.OUT)
#init PWM on pin 12, 1000Hz
pwm = GPIO.PWM(12, 1000)

print("\nPress ctrl+c to quit\n")
#starting duty cycle = 0%
dc=0
pwm.start(dc)

#loop
try:
    while True:
        #loop dc from 0 to 100, increment by 5
        for dc in range(0,101,5):
            pwm.ChangeDutyCycle(dc)
            time.sleep(0.05)
            print(dc)
        for dc in range(95, 0, -5):
            pwm.ChangeDutyCycle(dc)
            time.sleep(0.05)
            print(dc)
except KeyboardInterrupt:
    print("Ctrl C pressed - terminating program")
    
pwm.stop()
GPIO.cleanup()