#include <stdio.h>
#include <string.h>

int crypton(char *pass){
	char afbt[29] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '$', '&', '.'};


	for (int i=0; i < strlen(pass); i++) {
              switch(pass[i]){
                case('a'): printf("%c", afbt[3]);break; 
                case('b'): printf("%c", afbt[4]);break;
                case('c'): printf("%c", afbt[5]);break; 
                case('d'): printf("%c", afbt[6]);break;  
                case('e'): printf("%c", afbt[7]);break;  
                case('f'): printf("%c", afbt[8]);break;  
                case('g'): printf("%c", afbt[9]);break;  
                case('h'): printf("%c", afbt[10]);break;  
                case('i'): printf("%c", afbt[11]);break;  
                case('j'): printf("%c", afbt[12]);break;  
                case('k'): printf("%c", afbt[13]);break;  
                case('l'): printf("%c", afbt[14]);break;  
                case('m'): printf("%c", afbt[15]);break;  
                case('n'): printf("%c", afbt[16]);break; 
                case('o'): printf("%c", afbt[17]);break;  
                case('p'): printf("%c", afbt[18]);break;  
                case('q'): printf("%c", afbt[19]);break;  
                case('r'): printf("%c", afbt[20]);break;  
                case('s'): printf("%c", afbt[21]);break;  
                case('t'): printf("%c", afbt[22]);break;  
                case('u'): printf("%c", afbt[23]);break;  
                case('v'): printf("%c", afbt[24]);break;  
                case('w'): printf("%c", afbt[25]);break;  
                case('x'): printf("%c", afbt[26]);break;  
                case('y'): printf("%c", afbt[27]);break;  
                case('z'): printf("%c", afbt[0]);break;  
                case('$'): printf("%c", afbt[1]);break;  
                case('&'): printf("%c", afbt[29]);break;  
                case('.'): printf("%c", afbt[26]);break;
              }
            }

return 0;
}
