#!/usr/bin/python3
#coding: utf-8

# Libs
import PySimpleGUI as sg
from PySimpleGUI import *

def Archives():
    #Define the window´s contents
    sg.theme('DarkGrey3')
    #Rabbit-Archives
    layout2 = [
            [sg.Image("./assets/toca.png")],
            [sg.Text("File-Name", size=(10,0), font='Courier 12', background_color='Brown')],
            [sg.Input(key="-Archive-"), sg.FileBrowse()],
            [sg.Button("Ok")]
            ]
    #Create the Window
    window2 = sg.Window("Crypt-Archives", layout2, size=(650,350), icon=("./assets/toca.png"))
    # Display read
    while True:
        event2, values2 = window2.read()        
        #Variables
        Archives = values2['-Archive-']
        #Crypt-Archive
        if(event2 == "Ok"):
           sg.popup(os.popen(f"./bin/main {Archives} {Archives}").read())
        #Exit
        if(event2 == WIN_CLOSED):
            break

def Hash():    
    #Rabbit-Hash
    sg.theme("DarkGreen")
    #Menu
    menu_def = [
             ['&Help', '&About']

             ]

    layout = [
            [sg.Menu(menu_def, background_color='orange')],
            [sg.Image("./assets/rabbit.png")],#Img-Coelho
            [sg.Text("Password",size=(10,0), font='Courier 12', background_color='orange')],
            [sg.Input(key='-Passwd-', size=(100,7))],#Input Password
            [sg.Button('Encrypt',size=(10,0)), sg.Button('Decrypt', size=(10,0))],#Button-encrypt
            [sg.Text("Password-Hash",font='Courier 12', background_color='orange')],
            [sg.Output(size=(100,7))],#Output-Hash-Password
            [sg.Button('Archives', size=(10,0)), sg.Button('Quit',size=(10,0))],#Quit
            [sg.Image("./assets/grama.png", size=(3000,3000))]#Img-grama
            ]
   
    #Create the Window
    window = sg.Window("Rabbit-Hash",layout, size=(400, 530), icon=("./assets/rabbit.png"))
    # Display read
    while True:
        event, values = window.read()
        #Variables
        Password = values['-Passwd-']
        #Encrypt-Password
        if(event == 'Archives'):
            Archives()
        if(event == 'Encrypt'):
            print(os.popen(f"./bin/main {Password}").read())
        if(event == 'Decrypt'):
            print(os.popen(f"./bin/main arg1 arg2 {Password}").read())
        if(event == 'About'):
            sg.popup("Help",'''
            Description 

            Rabbit_Hash a DES-based encryption similar to cesar's encryption, 
            encrypts passwords and data, in the first input you will enter your password 
            to encrypt and soon after it will exit with the encrypted password

            Archives 

            is used to encrypt folders using the same scheme 
            as rabbit_hash, you can encrypt your files and 
            folders using this option

            Decrypt

            it will make the rabbit_hash hash decrypt, it will first go through the pattern validation and make the decrypt 
            ''')
        #Exit
        if(event == WIN_CLOSED or event == 'Quit'):
            break
    
def __init__():
    Hash()
try:
    __init__()
except KeyboardInterrupt:
    print("You_Interrupt")
