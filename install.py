#!/usr/bin/python3
#coding: utf-8

#Libs
import os
import time
import PySimpleGUI as sg

def __install__():
    sg.theme('DarkBlue')
    
    layout = [
            [sg.Text("Installing")],
            [sg.ProgressBar(5, orientation='h', size=(30,30), key=('Bar'))],
            [sg.Output(size=(45,10))],
            [sg.Cancel()]
            ]

    window = sg.Window('Installing Dependencies', layout)
    Bar = window['Bar']
    
    for i in range(5):
        event, values= window.read(timeout=5)
        print(os.popen("echo Actualizando Packges...").read())
        time.sleep(0.1)
        print(os.popen("echo Permission Actualizando...").read())
        print(os.popen("chmod 755 ./bin/main").read())
        print(os.popen("chmod 755 rabbit.py").read())
        time.sleep(0.1)
        if event == 'Cancel' or event == sg.WIN_CLOSED:
            sg.popup("Error")
            break
        Bar.Update(i+1)
    print(os.popen("pip3 install -r ./libs/requirements.txt").read())
    print(os.popen("make ./bin/main").read())
    time.sleep(2)
    sg.popup("Done")
    window.close()
    os.system("./rabbit.py")
try:
   __install__()
except KeyboardInterrupt:
    print("You_Broke_Off")
