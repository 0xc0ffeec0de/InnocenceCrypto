from tkinter import *
from tkinter import filedialog
from tkinter.messagebox import showinfo
import tkinter.scrolledtext as scrolledtext
import functions

dictionary = functions.generatedictionary()

def encrypto():
    global text, dictionary
    texto = text.get(1.0, 'end')
    encrypted = functions.encrypt(dictionary, texto)
    if encrypted == 1:
        showinfo(message='Menssagem muito curta')
    else:
        text.delete(1.0, 'end')
        text.insert(1.0, encrypted)
    

def decrypto():
    global text, dictionary
    texto = text.get(1.0, 'end')
    decrypted = functions.decrypt(dictionary, texto)
    if decrypted == 1:
        showinfo(message='Menssagem não criptografada com o InnocenceCrypto')
    else:
        text.delete(1.0, 'end')
        text.insert(1.0, decrypted)
    
def encryptfile():
    global text, dictionary    
    filetypes = (('text files', '*.txt'), ('All files', '*.*'))
    filename = filedialog.askopenfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
    file = open(filename, 'r')
    content = file.read()
    file.close()
    decrypted = functions.encrypt(dictionary, content)
    if decrypted == 1:
        showinfo(message='Menssagem muito curta')
    else:
        text.delete(1.0, 'end')
        text.insert(1.0, decrypted)
    
def decryptfile():
    global text, dictionary    
    filetypes = (('text files', '*.txt'), ('All files', '*.*'))
    filename = filedialog.askopenfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
    file = open(filename, 'r')
    content = file.read()
    file.close()
    decrypted = functions.decrypt(dictionary, content)
    if decrypted == 1:
        showinfo(message='Menssagem não criptografada com o InnocenceCrypto')
    else:
        text.delete(1.0, 'end')
        text.insert(1.0, decrypted)

def savetofile():
    global text
    filetypes = (('text files', '*.txt'), ('All files', '*.*'))
    filename = filedialog.asksaveasfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
    texto = text.get(1.0, 'end')
    file = open(filename, 'w')
    file.write(texto)
    file.close()

root = Tk() #Main Widged

#Make the button to encrypt, a button to decrypt a file and a button to save to file
buttonencryptfile = Button(root, text = 'Encrypt a file', command = encryptfile)
buttonencryptfile.grid(row = 0, column = 0)

buttondecryptfile = Button(root, text = 'Decrypt a file', command = decryptfile)
buttondecryptfile.grid(row = 0, column = 1)

buttonsavetofile = Button(root, text = 'Save to file...', command = savetofile)
buttonsavetofile.grid(row = 0, column = 2)

#Make textbox with a scrollbar and postion on the main widget
text = scrolledtext.ScrolledText(root)
text.grid(row=1, column = 0, columnspan = 3, rowspan = 3)

#Make the 3 buttons
buttonencrypt = Button(root, text = 'Encrypt', command = encrypto)
buttonencrypt.grid(row = 4, column = 0)

buttondecrypt = Button(root, text = 'decrypt', command = decrypto)
buttondecrypt.grid(row = 4, column = 1)

buttonquit = Button(root, text = 'Exit', command = root.destroy)
buttonquit.grid(row = 4, column = 2)

#set the icon
img = PhotoImage(file='icon.gif')
root.tk.call('wm', 'iconphoto', root._w, img)

#Run the window
root.mainloop()
