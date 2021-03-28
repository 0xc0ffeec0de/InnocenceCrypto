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

void help(){

        printf("\n    ---------    \n    | Help🐇 |    \n    ---------\n    | Usage | \n    ----------------\n    | ./main <input> |\n    ----------------");


}

int main(int argc, char *argv[]){
        char *pass = argv[1];
        if(argc >= 2){
                printf("\n\n|   Hash   |   "); 
                crypton(pass, "RB");printf("   |\n\n");          
        }else

                help();
return 0;

}
