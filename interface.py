from tkinter import *
import tkinter.scrolledtext as scrolledtext
import functions

dictionary = functions.generatedictionary()

def encrypto():
    global text, dictionary
    texto = text.get(1.0, 'end')
    encrypted = functions.encrypt(dictionary, texto)
    text.delete(1.0, 'end')
    text.insert(1.0, encrypted)

def decrypto():
    global text, dictionary
    texto = text.get(1.0, 'end')
    decrypted = functions.decrypt(dictionary, texto)
    text.delete(1.0, 'end')
    text.insert(1.0, decrypted)
    




root = Tk() #Main Widget

#Make textbox with a scrollbar and postion on the main widget
text = scrolledtext.ScrolledText(root)
text.grid(row=0, column = 0, columnspan = 3, rowspan = 3)

#Make the 3 buttons
buttonencrypt = Button(root, text = 'Encrypt', command = encrypto)
buttonencrypt.grid(row = 3, column = 0)

buttondecrypt = Button(root, text = 'decrypt', command = decrypto)
buttondecrypt.grid(row = 3, column = 1)

buttonquit = Button(root, text = 'Exit', command = root.destroy)
buttonquit.grid(row = 3, column = 2)

#Run the window
root.mainloop()
