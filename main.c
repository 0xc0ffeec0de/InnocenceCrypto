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
Coded by :: Mob in On1on
Compile :: gcc -Wall main.c -o main -lcrypt

execute :: ./main

*/

int main(void){


        char option;
        char *pass;
        MALLOC(pass, sizeof(char));
        char topom[28];
        char afbt[28] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '$', '&'};
    
        do{

            printf(":: Pass :: ");
            scanf("\n%s", *&pass);
            
            printf("\n:: CryptOM ::");
             
            for (int i=0; i < strlen(pass); i++) {
            
              switch(pass[i]){
                case('a'): topom[0] = afbt[3]; printf("%c", topom[0]); break; 
                case('b'): topom[1] = afbt[4]; printf("%c", topom[1]); break;
                case('c'): topom[2] = afbt[5]; printf("%c", topom[2]); break; 
                case('d'): topom[3] = afbt[6]; printf("%c", topom[3]); break;  
                case('e'): topom[4] = afbt[7]; printf("%c", topom[4]); break;  
                case('f'): topom[5] = afbt[8]; printf("%c", topom[5]); break;  
                case('g'): topom[6] = afbt[9]; printf("%c", topom[6]); break;  
                case('h'): topom[7] = afbt[10]; printf("%c", topom[7]); break;  
                case('i'): topom[8] = afbt[11]; printf("%c", topom[8]); break;  
                case('j'): topom[9] = afbt[12]; printf("%c", topom[9]); break;  
                case('k'): topom[10] = afbt[13]; printf("%c", topom[10]); break;  
                case('l'): topom[11] = afbt[14]; printf("%c", topom[11]); break;  
                case('m'): topom[12] = afbt[15]; printf("%c", topom[12]); break;  
                case('n'): topom[13] = afbt[16]; printf("%c", topom[13]); break; 
                case('o'): topom[14] = afbt[17]; printf("%c", topom[14]); break;  
                case('p'): topom[15] = afbt[18]; printf("%c", topom[15]); break;  
                case('q'): topom[16] = afbt[19]; printf("%c", topom[16]); break;  
                case('r'): topom[17] = afbt[20]; printf("%c", topom[17]); break;  
                case('s'): topom[18] = afbt[21]; printf("%c", topom[18]); break;  
                case('t'): topom[19] = afbt[22]; printf("%c", topom[19]); break;  
                case('u'): topom[20] = afbt[23]; printf("%c", topom[20]); break;  
                case('v'): topom[21] = afbt[24]; printf("%c", topom[21]); break;  
                case('w'): topom[22] = afbt[25]; printf("%c", topom[22]); break;  
                case('x'): topom[23] = afbt[26]; printf("%c", topom[23]); break;  
                case('y'): topom[24] = afbt[27]; printf("%c", topom[24]); break;  
                case('z'): topom[25] = afbt[0]; printf("%c", topom[25]); break;  
                case('$'): topom[26] = afbt[1]; printf("%c", topom[26]); break;  
                case('&'): topom[27] = afbt[2]; printf("%c", topom[27]); break;  
              }
            }
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

