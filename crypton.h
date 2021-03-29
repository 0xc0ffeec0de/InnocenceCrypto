#include <stdio.h>
#include <string.h>

#define afbt "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.!@#$%&*-_<>[]{}"

int crypton(char *pass, char *pr_bytes){
        for(int i=0;i < strlen(pr_bytes); i++){
                printf("%c", pr_bytes[i]);
                }          
        for(int i=0;i<strlen(pass);i++){
                for (int ii = 0; ii < strlen(afbt); ii++){
                        if( pass[i] == afbt[ii]){
                                printf("%c", afbt[ii+strlen(pass)]);
                        }
                }
        }

        return 0;
}
