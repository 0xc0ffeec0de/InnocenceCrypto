  /*
 *#codification-UTF-8
 *#Coded by :: Mob and Onion \._./
 *#Compile :: make main.c main
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
                crypton(pass, "MO");printf("   |\n");          
        }else
                 printf("[!][Error not Argument]\n");

return 0;

}

