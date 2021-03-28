  /*
 *#codification-UTF-8
 *#Coded by :: Mob and Onion \._./
 *#Compile :: gcc -Wall main.c -o main -lcrypt
 *#run :: ./main
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "crypton.h"


int main(int argc, char *argv[]){
        char *pass = argv[1];
        if(argc >= 2){
                printf("|   Cryptom   |   "); 
                crypton(pass, "MO");printf("   |");          
        }else
                 printf("[!][Error not Argument]");

return 0;

}

