import kivy
from kivy.app import App
from kivy.uix.label import Label
from kivy.uix.button import Button
from kivy.uix.floatlayout import FloatLayout
from kivy.uix.widget import Widget 
from kivy.lang import Builder
from kivy.uix.screenmanager import ScreenManager, Screen
from kivy.core.window import Window
from kivy.uix.dropdown import DropDown
from kivy.uix.textinput import TextInput
import kivy.properties as kyprops
from kivy.animation import Animation
from kivy.clock import Clock
#import RPi.GPIO as GPIO

class MenuScreen(Screen):
    pass

class IntensityScreen(Screen):
    intensity = kyprops.NumericProperty(0)
    forceApplied = kyprops.NumericProperty(0)
    warningMessage = "Test warning message, pressure within threshold\nis being applied."
    forceMessage = "Force being applied, in Newtons, in\nrelation to intensity."

    def intensityMod(self, determine):
        if(determine == "+"):
            if(self.intensity < 10):
                self.intensity+=1
        elif(determine == "-"):
            if(self.intensity > 0):
                self.intensity-=1
    
    def calcForce(self, determine):
        if(determine == "+"):
            if(self.forceApplied < 250):
                self.forceApplied+=25
        elif(determine == "-"):
            if(self.forceApplied > 0):
                self.forceApplied-=25

    def intensitySubmit(self):
        app = App.get_running_app()
        app.intensityTotal = self.intensity
        app.workingForce = self.forceApplied

class PitchRollScreen(Screen):
    infoMessage = "Values Relative to Current Position for Pitch and Roll."
    myPitch = kyprops.NumericProperty(0)
    myRoll = kyprops.NumericProperty(0)

    def retrievePR(self):
        app = App.get_running_app()
        self.myPitch = app.incomingPitch
        self.myRoll = app.incomingRoll

class StartScreen(Screen):
    timeCount = kyprops.NumericProperty()
    pressureTime = kyprops.NumericProperty(0)

    def pTimeMod(self, determine):
        if(determine == "+1"):
            if(self.pressureTime < 60):
                self.pressureTime+=1
        elif(determine == "-1"):
            if(self.pressureTime > 0):
                self.pressureTime-=1
        elif(determine == "+10"):
            if(self.pressureTime < 51):
                self.pressureTime+=10
        else:
            if(self.pressureTime > 10):
                self.pressureTime-=10

    def cycleSubmit(self):
        app = App.get_running_app()
        app.pressureTimeMain = self.pressureTime

    def beginProc(self):
        app = App.get_running_app()
        Clock.schedule_interval(self.increment_time, .1)
        self.increment_time(app.pressureTimeMain)
        self.ids.intensityShow.text = str(app.intensityTotal)
        self.ids.forceShow.text = str(app.workingForce)

    def increment_time(self, interval):
        app = App.get_running_app()
        if(self.timeCount < (app.pressureTimeMain)):
            self.timeCount+=.1

    def start(self):
        Clock.unschedule(self.increment_time)
        Clock.schedule_interval(self.increment_time, .1)

    def stop(self):
        Clock.unschedule(self.increment_time)

class MyInterfaceApp(App):
    pressureTimeMain = 0
    intensityTotal = 0
    workingForce = 0
    incomingPitch = 5
    incomingRoll = 8
    #GPIO.setmode(GPIO.BOARD)

    #aOut1 = 11 #Actuator Output 1 set to P1 pin 11
    #xIn1 = 13 #X Input 1 set to P1 pin 13
    #yIn1 = 15 #Y Input 1 set to P1 pin 15
    #GPIO.setup(aOut1, GPIO.OUT)
    #GPIO.setup(xIn1, GPIO.IN)
    #GPIO.setup(yIn1, GPIO.IN)

    #aOut2 = 12 #Actuator Output 2 set to P1 pin 12
    #xIn2 = 16 #X Input 2 set to P1 pin 16
    #yIn2 = 18 #Y Input 2 set to P1 pin 18
    #GPIO.setup(aOut2, GPIO.OUT)
    #GPIO.setup(xIn2, GPIO.IN)
    #GPIO.setup(yIn2, GPIO.IN)
    

    def build(self):
        Window.fullscreen = 'auto'
        sm = ScreenManager()
        sm.add_widget(MenuScreen(name='mainmenu'))
        sm.add_widget(IntensityScreen(name='intensitymenu'))
        sm.add_widget(PitchRollScreen(name='pitchrollmenu'))
        sm.add_widget(StartScreen(name='startmenu'))
        return sm

if __name__ == "__main__":
    MyInterfaceApp().run()