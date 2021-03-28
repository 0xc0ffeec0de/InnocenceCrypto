  /*
 *#codification-UTF-8
 *#Coded by :: Mob and Onion \._./
 *#Compile :: gcc -Wall main.c -o main -lcrypt
 *#run :: ./main
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "crypton.h"

int main(void){

        char option;
        char *pass = malloc(sizeof(char));
        if(pass == NULL)
                fprintf(stderr ,"[!][Error in alocate Memory]");

        do{

            printf(":: Pass :: ");
            scanf("\n%s", *&pass);
            
            printf("\n:: Cryptom ::"); 
            crypton(pass, "MO");          

            char *c = crypt(pass, "MO");
            printf("\n\n:: CryptDES :: %s\n", c);
            
            printf(":: HexCryptDES :: ");
            for (int i=0; i < strlen(c); i++)
                printf("%x", c[i]);
            
            puts("\n\n[!][Continue? y/n] :: ");
            scanf("\n%c", &option);

    }while(option == 'y');

            if(option == 'n'){
                puts("\n[Bye]");
                exit(1); 
            }else{
                    printf("\n[!][Option Invalid][Default return Main]\n\n");
                    main();
            }
    
        free(pass);
return 0;
}
