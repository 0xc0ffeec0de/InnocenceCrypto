from tkinter import *
from tkinter import filedialog
from tkinter.messagebox import showinfo
import tkinter.scrolledtext as scrolledtext
import functions


dictionary = functions.generatedictionary()

def encrypto():
    global text, dictionary, radiobuttonvar
    texto = text.get(1.0, 'end')
    texto = texto.rstrip()
    step = radiobuttonvar.get()
    encrypted = functions.encrypt(dictionary, texto, step)
    if encrypted == 1:
        showinfo(message='Menssagem muito curta')
    else:
        text.delete(1.0, 'end')
        text.insert(1.0, encrypted)
    

def decrypto():
    global text, dictionary, radiobuttonvar
    texto = text.get(1.0, 'end')
    texto = texto.rstrip()
    step = radiobuttonvar.get()
    decrypted = functions.decrypt(dictionary, texto, step)
    if decrypted == 1:
        showinfo(message='Menssagem não criptografada com o InnocenceCrypto')
    else:
        text.delete(1.0, 'end')
        text.insert(1.0, decrypted)
    
def encryptfile():
    global text, dictionary, radiobuttonvar
    step = radiobuttonvar.get()
    filetypes = (('text files', '*.txt'), ('All files', '*.*'))
    filename = filedialog.askopenfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
    file = open(filename, 'r')
    content = file.read()
    file.close()
    content = content.rstrip()
    encrypted = functions.encrypt(dictionary, content, step)
    if encrypted == 1:
        showinfo(message='Menssagem muito curta')
    else:
        file = open(filename, 'w')
        file.write(encrypted)
        file.close()
        text.delete(1.0, 'end')
        text.insert(1.0, encrypted)
    
def decryptfile():
    global text, dictionary, radiobuttonvar
    step = radiobuttonvar.get()
    filetypes = (('text files', '*.txt'), ('All files', '*.*'))
    filename = filedialog.askopenfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
    file = open(filename, 'r')
    content = file.read()
    file.close()
    content = content.rstrip()
    decrypted = functions.decrypt(dictionary, content, step)
    if decrypted == 1:
        showinfo(message='Menssagem não criptografada com o InnocenceCrypto')
    else:
        file = open(filename, 'w')
        file.write(decrypted)
        file.close()
        text.delete(1.0, 'end')
        text.insert(1.0, decrypted)

def savetofile():
    global text
    filetypes = (('text files', '*.txt'), ('All files', '*.*'))
    filename = filedialog.asksaveasfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
    texto = text.get(1.0, 'end')
    texto = texto.rstrip()
    file = open(filename, 'w')
    file.write(texto)
    file.close()

root = Tk() #Main Widged
root.title('InnocenceCrypto')#Main window title
root.geometry("670x550")# Adjust size
root.minsize(670, 550)# set minimum window size value
root.maxsize(670, 550)# set maximum window size value

radiobuttonvar = IntVar()#Declare the radiobuttons variable

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

#Make the step selection
labelstep = Label(root, text = 'Step:')
labelstep.grid(row = 4, column = 1)

frameradio = Frame(root)
frameradio.grid(row = 5, column = 0, columnspan = 3, rowspan = 3)

step = 4
for i in range(3):
    if step > 8:
        break
    for a in range(3):
        if step > 8:
            break
        radio = Radiobutton(frameradio, text = step,value = step, variable = radiobuttonvar)
        radio.grid(row = i, column = a)
        radio.select()
        step += 1

#Make the 3 buttons
buttonencrypt = Button(root, text = 'Encrypt', command = encrypto)
buttonencrypt.grid(row = 8, column = 0)

buttondecrypt = Button(root, text = 'Decrypt', command = decrypto)
buttondecrypt.grid(row = 8, column = 1)

buttonquit = Button(root, text = 'Exit', command = root.destroy)
buttonquit.grid(row = 8, column = 2)

#The icon
image = PhotoImage(file = './assets/icicon.gif')
root.iconphoto(False, image)

#Run the window
root.mainloop()
