#include <stdio.h>
#include <string.h>
#include <ctype.h>

int crypton(char *pass){
        char nums[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        char afbt[36] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '.', '!', '@', '#', '$', '%', '&', '*', '<', '>'};


        for (int i=0; i < strlen(pass); i++) {
              switch(pass[i]){
                case('a'): printf("%c%c", afbt[3], nums[0]);break;case('A'): printf("%c%c", afbt[4], nums[1]);break; 
                case('b'): printf("%c", afbt[4]);break;case('B'): printf("%c", afbt[4]);break;
                case('c'): printf("%c%c", afbt[5], nums[1]);break;case('C'): printf("%c%c", afbt[5], nums[2]);break;
                case('d'): printf("%c", afbt[6]);break;case('D'): printf("%c", afbt[7]);break;
                case('e'): printf("%c%c", afbt[7], nums[2]);break;case('E'): printf("%c%c", afbt[8], nums[3]);break; 
                case('f'): printf("%c", afbt[8]);break;case('F'): printf("%c", afbt[9]);break;  
                case('g'): printf("%c%c", afbt[9], nums[3]);break;case('G'): printf("%c%c", afbt[10], nums[4]);break;  
                case('h'): printf("%c", afbt[10]);break; case('H'):printf("%c", afbt[11]);break; 
                case('i'): printf("%c%c", afbt[11], nums[4]);break;case('I'): printf("%c%c", afbt[12], nums[5]);break;  
                case('j'): printf("%c", afbt[12]);break;case('J'): printf("%c", afbt[13]);break; 
                case('k'): printf("%c", afbt[13]);break;case('K'): printf("%c", afbt[14]);break;
                case('l'): printf("%c", afbt[14]);break;case('L'): printf("%c", afbt[15]);break; 
                case('m'): printf("%c", afbt[15]);break;case('M'): printf("%c", afbt[16]);break; 
                case('n'): printf("%c", afbt[16]);break;case('N'): printf("%c", afbt[17]);break;
                case('o'): printf("%c", afbt[17]);break;case('O'): printf("%c", afbt[18]);break;
                case('p'): printf("%c", afbt[18]);break;case('P'): printf("%c", afbt[19]);break;  
                case('q'): printf("%c", afbt[19]);break;case('Q'): printf("%c", afbt[20]);break;  
                case('r'): printf("%c", afbt[20]);break;case('R'): printf("%c", afbt[21]);break;
                case('s'): printf("%c", afbt[21]);break;case('S'): printf("%c", afbt[22]);break;
                case('t'): printf("%c", afbt[22]);break;case('T'): printf("%c", afbt[23]);break;
                case('u'): printf("%c%c", afbt[23], nums[5]);break;case('U'): printf("%c%c", afbt[24], nums[6]);break;  
                case('v'): printf("%c", afbt[24]);break;case('V'): printf("%c", afbt[25]);break;
                case('w'): printf("%c%c", afbt[25], nums[6]);break;case('W'): printf("%c%c", afbt[26], nums[7]);break;  
                case('x'): printf("%c", afbt[26]);break;case('X'): printf("%c", afbt[27]);break;
                case('y'): printf("%c%c", afbt[27], nums[7]);break;case('Y'): printf("%c%c", afbt[28], nums[8]);break;
                case('z'): printf("%c", afbt[28]);break;case('Z'): printf("%c", afbt[29]);break;
                case('.'): printf("%c%c", afbt[29], nums[8]);break;
                case('!'): printf("%c", afbt[30]);break;
                case('@'): printf("%c%c", afbt[31], nums[9]);break;
                case('#'): printf("%c", afbt[32]);break;
                case('$'): printf("%c", afbt[33]);break;
                case('%'): printf("%c", afbt[34]);break;
                case('&'): printf("%c", afbt[35]);break;
                case('*'): printf("%c", afbt[1]);break;
                case('<'): printf("%c", afbt[2]);break;
                case('>'): printf("%c", afbt[3]);break;
      

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
