from tkinter import *
import os
window = Tk()
window.title("Welcome to Antonio's Sample app")
window.geometry('350x150')
lbl = Label(window, text="Click the Button")
lbl.grid(column=0, row=0)
txt = Entry(window,width=10)
txt.grid(column=1, row=1)
def clicked():
    res = "Welcome " + txt.get()
    lbl.configure(text="Button was clicked !!\n" + res)
    messagebox.showinfo('Message title', 'Message content')
btn = Button(window, text="Click Me", command=clicked)
btn.grid(column=1, row=0)
chk_state = BooleanVar()
chk_state.set(True) #set check state
chk = Checkbutton(window, text='Choose', var=chk_state)
chk.grid(column=0, row=3)
rad1 = Radiobutton(window,text='First', value=1)
rad2 = Radiobutton(window,text='Second', value=2)
rad3 = Radiobutton(window,text='Third', value=3)
rad1.grid(column=0, row=4)
rad2.grid(column=1, row=4)
rad3.grid(column=2, row=4)

def endp():
    os.system("sudo shutdown now")
endb = Button(window, text="close", command=endp)
endb.grid(column=1, row=5)

window.mainloop()