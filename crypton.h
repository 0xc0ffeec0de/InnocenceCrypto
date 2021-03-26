#include <stdio.h>
#include <string.h>
#include <ctype.h>

int crypton(char *pass){
        char nums[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        char afbt[29] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '$', '&', '.'};


        for (int i=0; i < strlen(pass); i++) {
              switch(pass[i]){
                case('a'): printf("%c%c", afbt[3], nums[0]);break; 
                case('b'): printf("%c", afbt[4]);break;
                case('c'): printf("%c%c", afbt[5], nums[1]);break; 
                case('d'): printf("%c", afbt[6]);break;  
                case('e'): printf("%c%c", afbt[7], nums[2]);break;  
                case('f'): printf("%c", afbt[8]);break;  
                case('g'): printf("%c%c", afbt[9], nums[3]);break;  
                case('h'): printf("%c", afbt[10]);break;  
                case('i'): printf("%c%c", afbt[11], nums[4]);break;  
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
                case('u'): printf("%c%c", afbt[23], nums[5]);break;  
                case('v'): printf("%c", afbt[24]);break;  
                case('w'): printf("%c%c", afbt[25], nums[6]);break;  
                case('x'): printf("%c", afbt[26]);break;  
                case('y'): printf("%c%c", afbt[27], nums[7]);break;  
                case('z'): printf("%c", afbt[0]);break;  
                case('$'): printf("%c%c", afbt[0], nums[8]);break;  
                case('&'): printf("%c", afbt[1]);break;  
                case('.'): printf("%c%c", afbt[2], nums[9]);break;
              }
            }
        for(int i=0; i < strlen(pass); i++){   
        switch(pass[i]){
                case('0'): printf("%c", toupper(afbt[3]));break;
                case('1'): printf("%c", toupper(afbt[4]));break;
                case('2'): printf("%c", toupper(afbt[5]));break;
                case('3'): printf("%c", toupper(afbt[6]));break;
                case('4'): printf("%c", toupper(afbt[7]));break;
                case('5'): printf("%c", toupper(afbt[8]));break;
                case('6'): printf("%c", toupper(afbt[9]));break;
                case('7'): printf("%c", toupper(afbt[10]));break;
                case('8'): printf("%c", toupper(afbt[11]));break;
                case('9'): printf("%c", toupper(afbt[12]));break;

            }
        }


        return 0;
}
