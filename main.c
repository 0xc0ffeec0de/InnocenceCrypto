#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
Coded by :: Mob
Compile :: gcc -Wall main.c -o main -lcrypt

execute :: ./main

*/

int len(char *ler){ 
        while(*ler != 0){
                printf("%x", *ler++);
        }
return 0;
}

int main(void){

        #define MALLOC(ptr, size){ \
                ptr = malloc(size); \
                if (ptr == NULL){ \
                        fprintf(stderr, "[Error in alocate memory !!]"); \
                        exit(1); \
                }\
        }

        char option;
        char *pass;
        MALLOC(pass, sizeof(char));

    do{
            char *c = crypt(pass, "da");

            printf("[Pass :: ");
            scanf("\n%s", *&pass);
            printf("[Crypt :: %s\n", c);
            

            printf("[HexCrypt :: ");
            for (int i=0; i < len(c); i++)
                printf("%x", c[i]);
         
                   
            puts("\n\nContinue [y/n] :: ");
            scanf("\n%c", &option);
    
    }while(option == 'y');

            if(option == 'n'){
                puts("[Bye]");
                exit(1); 
            }else
                    printf("[Option Invalid]");
            
    free(pass);
    return 0;

}
