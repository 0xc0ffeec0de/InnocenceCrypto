#!/usr/bin/python3
#coding: utf-8

#Libs
import os
import time

def __install__():
    
    #Work around :)
    os.system("make ./bin/main")
    os.system("pip3 install -r ./libs/requirements.txt")
    time.sleep(2)
    #os.system("rm ./libs/requirements.txt")
    if os.system("ls ./bin/main") == 0:
        os.system("chmod 755 ./bin/main")
        print("\nArchive_Compiled")
    else:
        print("\nError_Unexpected")


try:
    __install__()
except KeyboardInterrupt:
    print("You_Broke_Off")

