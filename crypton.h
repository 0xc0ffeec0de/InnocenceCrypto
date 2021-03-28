#include <stdio.h>
#include <string.h>
#include <ctype.h>

int crypton(char *pass, char *pr_bytes){
        char afbt[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','.','!','@','#','$','%','&','*','-','_','<','>','[',']','{','}'};
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
