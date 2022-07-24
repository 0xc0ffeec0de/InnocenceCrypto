from tkinter import *
from tkinter import filedialog
from tkinter.messagebox import showinfo
import tkinter.scrolledtext as scrolledtext
from src.cryptfunctions import CryptFunctions 


class InterfaceIC:
    crypt_funcs = CryptFunctions()
    
    def __init__(self):
        """
        Classe da interface do programa.
        """
        self.window = Tk()
        self.radiobuttonvar = IntVar()
        
    def encrypto(self):
        new_text = self.text.get(1.0, 'end')
        step = self.radiobuttonvar.get()
        encrypted = InterfaceIC.crypt_funcs.encrypt(new_text, step)
        
        if encrypted == 1:
            showinfo(message='Mensagem muito curta')
        else:
            self.text.delete(1.0, 'end')
            self.text.insert(1.0, encrypted)
        
    def decrypto(self):
        new_text = self.text.get(1.0, 'end')
        step = self.radiobuttonvar.get()
        decrypted = InterfaceIC.crypt_funcs.decrypt(new_text, step)
        
        if decrypted == 1:
            showinfo(message='Mensagem não criptografada com o InnocenceCrypto')
        else:
            self.text.delete(1.0, 'end')
            self.text.insert(1.0, decrypted)
        
    def encryptfile(self):
        step = self.radiobuttonvar.get()
        filetypes = (('text files', '*.txt'), ('All files', '*.*'))
        filename = filedialog.askopenfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
        
        with open(filename, 'r') as file:
            content = file.read()
        
        encrypted = InterfaceIC.crypt_funcs.encrypt(content, step)
        
        if encrypted == 1:
            showinfo(message='Mensagem muito curta')
        else:
            self.text.delete(1.0, 'end')
            self.text.insert(1.0, encrypted)
        
    def decryptfile(self):
        step = self.radiobuttonvar.get()
        filetypes = (('text files', '*.txt'), ('All files', '*.*'))
        filename = filedialog.askopenfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
        
        with open(filename, 'r') as file:
            content = file.read()
            
        decrypted = InterfaceIC.crypt_funcs.decrypt(content, step)
        
        if decrypted == 1:
            showinfo(message='Mensagem não criptografada com o InnocenceCrypto')
        else:
            self.text.delete(1.0, 'end')
            self.text.insert(1.0, decrypted)

    def savetofile(self):
        filetypes = (('text files', '*.txt'), ('All files', '*.*'))
        filename = filedialog.asksaveasfilename(title = 'Open a file', initialdir='/', filetypes = filetypes)
        new_text = self.text.get(1.0, 'end')
        
        with open(filename, 'w') as file:
            file.write(new_text)

    def create_interface(self):
        self.window.title('InnocenceCrypto')
        self.window.geometry("500x550")
        self.window.minsize(500, 550)
        self.window.maxsize(500, 550)

        self.__create_top_buttons()
        self.__create_text_area()
        self.__create_step_buttons()
        self.__create_bottom_buttons()

        self.__set_icon()
        
    def run(self):
        self.create_interface()
        self.window.mainloop()
    
    def __set_icon(self):
        image = PhotoImage(file = './assets/icicon.gif')
        self.window.iconphoto(False, image)
        
    def __create_text_area(self):
        self.text = scrolledtext.ScrolledText(self.window)
        self.text.pack()
        
    def __create_top_buttons(self):
        frametop = Frame(self.window)
        frametop.pack(side = TOP)

        buttonencryptfile = Button(frametop, text = 'Encrypt a file', command = self.encryptfile)
        buttonencryptfile.grid(row = 0, column = 0)

        buttondecryptfile = Button(frametop, text = 'Decrypt a file', command = self.decryptfile)
        buttondecryptfile.grid(row = 0, column = 1)

        buttonsavetofile = Button(frametop, text = 'Save to file...', command = self.savetofile)
        buttonsavetofile.grid(row = 0, column = 2)
    
    def __create_step_buttons(self):
        frameradio = Frame(self.window)
        frameradio.pack()

        labelstep = Label(frameradio, text = 'Step:')
        labelstep.grid(row = 0, column = 1)

        step = 4
        for i in range(1, 3):
            if step > 8:
                break
            for a in range(3):
                if step > 8:
                    break
                radio = Radiobutton(frameradio, text = step,value = step, variable = self.radiobuttonvar)
                radio.grid(row = i, column = a)
                radio.select()
                step += 1
    
    def __create_bottom_buttons(self):
        framedown = Frame(self.window)
        framedown.pack(side = BOTTOM)
                    
        buttonencrypt = Button(framedown, text = 'Encrypt', command = self.encrypto)
        buttonencrypt.grid(row = 0, column = 0)

        buttondecrypt = Button(framedown, text = 'Decrypt', command = self.decrypto)
        buttondecrypt.grid(row = 0, column = 1)

        buttonquit = Button(framedown, text = 'Exit', command = self.window.destroy)
        buttonquit.grid(row = 0, column = 2)

    
