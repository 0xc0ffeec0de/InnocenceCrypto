#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void){ 
    char option;
    char pass[100];

    do{

            printf("Crypt :: ");
            scanf("\n%s", *&pass);


            puts("\n");
            char *c = crypt(pass, "li");
            printf("Pass  :: %s\n", pass);
            printf("Crypt :: %s\n", c);
            printf("HexCrypt :: ");
            for (int i=0; i < strlen(c); i++) {
                printf("%x", c[i]);
            }
            printf("\n");
                   
            puts("Continue [y/n] :: ");
            scanf("\n%c", &option);
    }while(option == 'y');

            if(option == 'n'){
                    puts("[Bye]");
            }

    return 0;
}
