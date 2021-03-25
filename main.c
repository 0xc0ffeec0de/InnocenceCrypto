#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
 
#define MALLOC(ptr, size){ \
                ptr = malloc(size); \
                if (ptr == NULL){ \
                        fprintf(stderr, "[Error in alocate memory !!]"); \
                        exit(1); \
                }\
        }

/*
Coded by :: Mob
Compile :: gcc -Wall main.c -o main -lcrypt

execute :: ./main

*/

int main(void){


        char option;
        char *pass;
        MALLOC(pass, sizeof(char));
        char afbt[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '$', '&'};
    
        do{

            printf(":: Pass :: ");
            scanf("\n%s", *&pass);
            
            printf("\n:: CryptOM ::");
            for(int i=0;i < strlen(pass);i++)
                    printf("%lc", afbt[i]+i+1 );
            
            char *c = crypt(pass, "da");
            printf("\n:: CryptDES :: %s\n", c);

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
                    printf("\n[!][Option Invalid][Default return]\n\n");
                    main();
            }
    
    free(pass);
return 0;
}

