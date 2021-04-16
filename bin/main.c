  /*
 	*#codification-UTF-8
 	*#Coded by :: Mob and Onion \._./
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libs/rabbit.h"


int rabbit(char *pass, char *pr_bytes){
        for(int i=0;i < strlen(pr_bytes); i++){
                printf("%c", pr_bytes[i]);
                }          
        for(int i=0;i<strlen(pass);i++){
                for (int ii = 0; ii < strlen(afbt); ii++){
                        if( pass[i] == afbt[ii]){
                           	int Passwd =  printf("%c", afbt[ii+strlen(pass)]);
			}
                }
        }
return 1;
}

int main(int argc, char *argv[]){

	char *pass = argv[1]; 	
	if(argc <= 2){
               	rabbit(pass, "RB");          
	}
return 0;
}
