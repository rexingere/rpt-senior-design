import RPi.GPIO as GPIO
import time


# ARM 1:
# GPIO 18 - blue - forward
# GPIO 15 - green - backward
getPos = 8.56

GPIO.setwarnings(False)
    
GPIO.setmode(GPIO.BCM)
GPIO.setup(18, GPIO.OUT, initial = GPIO.LOW)
GPIO.setup(15, GPIO.OUT, initial = GPIO.LOW)

def controller(acNo, dPos, holdTime, numPulse):
    while numPulse:
        setPos(acNo, dPos)
        hold(holdTime)
        numPulse -= 1
        
        if numPulse:
            intermediateRetraction(acNo, dPos)
        print(numPulse)
        print("pulses remaining")

    fullRetraction(acNo)    

def intermediateRetraction(acNo, dPos):
    print("intermediate retracting")
    setPos(acNo, getPos*.6)
    
def fullRetraction(acNo):
    print("fully retracting")
    setPos(acNo, 0)

def hold(holdTime):
    while holdTime:
        print(holdTime)
        time.sleep(1)
        holdTime -= 1
    print("end of hold")
 
# controls direction and arm
def setPos(acNo, dPos):
    # Forward
    # Condition curPos < dPos: increase curPos to match
    #if getPos(acNo) < dPos - 1:
    if getPos < dPos - 1:
        n = 3
        if acNo == 1:
            GPIO.output(18, GPIO.HIGH)
        #while getPos(acNo) < dPos - 1:
        while n:
            #GPIO.output(5, GPIO.LOW) # set motors to forward
            #GPIO.output(6, GPIO.LOW)
            #mc.ChangeDutyCycle(fwdSpd)
            print("increasing")
            print (n)
            time.sleep(1)
            n-=1
            
        #mc.ChangeDutyCycle(0) # Stop motor upon reaching desired position
        print("end of increase")
        if acNo == 1:
            GPIO.output(18, GPIO.LOW)

        
    
    # Condition curPos > dPos: decrease curPos to match
    if getPos > dPos + 1:
        n = 3
        if acNo == 1:
            GPIO.output(15, GPIO.HIGH)

        #while getPos(acNo) > dPos + 1:
        while n:
            #GPIO.output(5, GPIO.HIGH) # set motors to reverse
            #GPIO.output(6, GPIO.HIGH)
            #mc.ChangeDutyCycle(revSpd)
            print("decreasing")
            print (n)
            time.sleep(1)
            n -= 1
            
        #mc.ChangeDutyCycle(0)
        print("end of decrease")
        if acNo == 1:
            GPIO.output(15, GPIO.LOW)
