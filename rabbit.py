#!/usr/bin/python3
#coding: utf-8

# Libs
import PySimpleGUI as sg
from PySimpleGUI import *

def __init__():
    #Define the window´s contents
    sg.theme('DarkAmber')
    layout = [
            [sg.Image("./assets/rabbit.png")],
            [sg.Text("Password",size=(10,0)),sg.Input(key='-Passwd-', size=(15,0))],
            [sg.Button('Encrypt',size=(10,0))],
            [sg.Text("Password-Hash")],[sg.Output(size=(30,2))],
            [sg.Button('Quit',size=(10,0))]
            ]
   
    #Create the Window
    window = sg.Window("Rabbit-Hash", layout)
    while True:    
        # Display read
        event, values = window.read()
        # Exit
        if(event == WIN_CLOSED or event == 'Quit'):
            break
        # Display output
        Password = values['-Passwd-']
        # Encrypt 
        if(event == 'Encrypt'):
            print(os.popen(f"./bin/main {Password}").read())



__init__()
