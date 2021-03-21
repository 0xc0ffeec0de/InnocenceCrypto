#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]){
	
	char option; 
	char pass[100];
 
	do{
			
		printf("Crypt :: ");
		scanf("\n%s", *&pass);
		
		puts("\n");
		char *Crypt = crypt(pass, "li");

		printf("Pass  :: %s\n", pass);
		printf("Crypt :: $%s\n\n", Crypt);
		
		
		puts("Continue [y/n] :: ");
		scanf("\n%c", &option);
		system("clear");
	}while(option == 'y');
	
		if(option == 'n'){
			puts("Bye");
		}	

return 0;
}
