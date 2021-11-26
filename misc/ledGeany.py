import RPi.GPIO as gpio
import time

gpio.setwarnings(False)
    
gpio.setmode(gpio.BCM)
gpio.setup(18, gpio.OUT, initial=gpio.LOW)

def led_blink(n):
    while n:
        gpio.output(18, gpio.HIGH)
        time.sleep(1)
        gpio.output(18, gpio.LOW)
        time.sleep(1)

        n -= 1
        

    gpio.cleanup()
