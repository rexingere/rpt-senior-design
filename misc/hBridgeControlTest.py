import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(11, GPIO.OUT) # M1 E
GPIO.setup(13, GPIO.OUT) # M1 R
GPIO.setup(15, GPIO.OUT) # M2 E
GPIO.setup(16, GPIO.OUT) # M2 R

# Forward
GPIO.output(11, GPIO.HIGH)
GPIO.output(13, GPIO.LOW)
time.sleep(5)
# Backward
GPIO.output(11, GPIO.LOW)
GPIO.output(13, GPIO.HIGH)
time.sleep(5)
# Idle
GPIO.output(13, GPIO.LOW)

GPIO.cleanup()
