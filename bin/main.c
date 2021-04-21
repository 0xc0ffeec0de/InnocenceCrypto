 /*
 *#codification-UTF-8
 *#Coded by :: Mob and Onion \._./
 */

// Libs
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libs/rabbit.h"

int rabbit_encrypt(char *pass, char *pr_bytes){
      
        for(int i=0;i < strlen(pr_bytes); i++){
                printf("%c", pr_bytes[i]);
                }          
        for(int i=0;i<strlen(pass);i++){
                for (int ii = 0; ii < strlen(afbt); ii++){
                        if( pass[i] == afbt[ii]){
                                int Passwd = printf("%c", afbt[ii+strlen(pass)]);
                                }
                        }
                }
return 1;
}

int rabbit_decrypt(char *pass_decrypt){

        memset(pass_decrypt, ' ', 2);
        remove_spaces(pass_decrypt);

        for(int i=0;i<strlen(pass_decrypt);i++){
                for (int ii = 0; ii < strlen(afbt); ii++){
                        if( pass_decrypt[i] == afbt[ii]){
                                int Passwd =  printf("%c", afbt[ii-strlen(pass_decrypt)]);
                                }
                        }
                }
return 1;
}

/*
int rabbit_archive(char *archives){

        FILE *fl = fopen(archives,"r");
        char buffer[1659];
        if(fl == NULL)
                printf("Erro In Archive or File");
        else{
                printf("Done");

        }
}
*/
int main(int argc, char *argv[]){

        char *pass = argv[1]; 
        char *file = argv[2];
        char *pass_decrypt = argv[3];
         
        if(argc == 2){
                rabbit_encrypt(pass, "RB");          
        }else if(argc == 3){
                printf("Under maintenance!");
                //rabbit_archive(file);
        }else
                printf("");
        if(argc == 4){
                if(pass_decrypt[0] == 'R' && pass_decrypt[1] == 'B'){
                        rabbit_decrypt(pass_decrypt);
                        }else
                                printf("=====| Not-Valid-Hash!! |=====");
                }
return 0;
}
