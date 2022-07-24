import string

class CryptFunctions:
    def __init__(self):
        """
        Classe responsavel por criptografar e descriptografar strings
        """
        self.dictionary = self.generatedictionary()

    def generatedictionary(self):

        estringue = string.ascii_letters + string.digits + string.punctuation
        dictionary = {}

        # Cria dicionario usando o numero decimal de cada simbolo como chave valendo o simbolo
        for character in estringue:
            dictionary[ord(character)] = character

        return dictionary

    def encrypt(self, string_arg: str, step: int):
        if len(string_arg) <= 3:
            return 1
        wordlist = [] #guarda a lista de palavras
        newstring = string_arg.split(sep = '\n') #divide a string por quebra de linha
        #separa as palavras por espaços adicionando quebra de linha no fim a cada quebra de linha
        for word in newstring:
            if word == '':
                wordlist.append('\n')
            else:
                if ' ' in word:
                    for palavra in word.split(' '):
                        wordlist.append(palavra)
                else:
                    wordlist.append(word)
                wordlist.append('\n')        
        encrypted = 'IC' #variavel para guardar a string criptografada

        for word in wordlist:
            for letter in word:
                #se palavra for um quebra linha manter
                if word == '\n':
                    encrypted += word
                else:
                    #se chegar no fim da lista ir para o começo
                    if ord(letter) + step > 126:
                        encrypted += self.dictionary[((ord(letter)+ step)-94)]
                    else:
                        encrypted += self.dictionary[ord(letter)+step]
            if word != wordlist[-1]:
                encrypted += ' '

        return encrypted

    def decrypt(self, string_arg: str, step: int):

        if string_arg[0:2] != 'IC':
            return 1
        
        wordlist = [] #guarda a lista de palavras
        newstring = string_arg[2:-1].split(sep = '\n') #divide a string por quebra de linha
        #separa as palavras por espaços adicionando quebra de linha no fim a cada quebra de linha
        for word in newstring:
            if word == '':
                wordlist.append('\n')
            else:
                if ' ' in word:
                    for palavra in word.split(' '):
                        wordlist.append(palavra)
                else:
                    wordlist.append(word)
                wordlist.append('\n')      
        decrypted = '' #variavel para guardar a string descriptografada

        for word in wordlist:
            for letter in word:
                #se palavra for um quebra linha manter
                if word == '\n':
                    decrypted += word
                else:
                    #se chegar no começo da lista ir para o fim
                    if ord(letter) - step < 34:
                        decrypted += self.dictionary[((ord(letter) - step)+94)]
                    else:
                        decrypted += self.dictionary[ord(letter)- step]
            if word != wordlist[-1]:
                decrypted += ' '

        return decrypted
