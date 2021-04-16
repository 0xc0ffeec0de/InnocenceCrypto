#!/usr/bin/python3
#coding: utf-8

# Libs
import PySimpleGUI as sg
from PySimpleGUI import *

def __init__():
    
    #Define the window´s contents
    sg.theme('DarkBlue')
    
    layout = [
            [sg.Image("./assets/rabbit.png")],#Img-Coelho
            [sg.Text("Password",size=(10,0), font='Courier 12', background_color='black')],
            [sg.Input(key='-Passwd-', size=(100,0))],#Input Password
            [sg.Button('Encrypt',size=(10,0))],#Button-encrypt
            [sg.Text("Password-Hash",font='Courier 12', background_color='black')],
            [sg.Output(size=(100,7))],#Output-Hash-Password
            [sg.Button('Quit',size=(10,0))],#Quit
            [sg.Image("./assets/grama.png", size=(3000,3000))]#Img-grama
            ]
   
    #Create the Window
    window = sg.Window("Rabbit-Hash",layout, size=(400, 500), icon=("./assets/rabbit.png"))
    # Display read
    
    while True:    
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
