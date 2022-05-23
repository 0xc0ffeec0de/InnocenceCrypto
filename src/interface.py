from tkinter import *
from tkinter.messagebox import showinfo
import tkinter.scrolledtext as scrolledtext
import functions

dictionary = functions.generatedictionary()

def encrypto():
    global text, dictionary, buttonencrypt, buttondecrypt
    texto = text.get(1.0, 'end')
    encrypted = functions.encrypt(dictionary, texto)
    if encrypted == 1:
        showinfo(message='Menssagem muito curta')
    else:
        text.delete(1.0, 'end')
        text.insert(1.0, encrypted)
    

def decrypto():
    global text, dictionary, buttonencrypt, buttondecrypt
    texto = text.get(1.0, 'end')
    decrypted = functions.decrypt(dictionary, texto)
    if decrypted == 1:
        showinfo(message='Menssagem não criptografada com o InnocenceCrypto')
    else:
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

#set the icon
img = PhotoImage(file='icon.gif')
root.tk.call('wm', 'iconphoto', root._w, img)

#Run the window
root.mainloop()
