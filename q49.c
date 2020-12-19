#include <stdio.h>  
#include <string.h>  
   
int main() {  
    int hexDigitToBinary[16] = {0, 1, 10, 11, 100, 101, 110, 111,
      1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};     
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int octalDigitToBinary[8] = {0,1,10,11,100,101,110,111}; 
    char hexadecimal[30];
    long long binaryNumber =0, octalNumber;   
    int i = 0, j, index=0, multiple = 1, threeDigits;  
   
    /* 
     * Take a hexadecimal number as input from user 
     */ 
    printf("Enter a Hexadecimal Number\n");  
    scanf("%s", hexadecimal);
     
    /* First Convert Hexadecimal Number to Binary Numbers
     * Find he hexadecimal digit in hexDigits and the substitute it
  * with corresponding value in hexDigitToBinary
     */
     
    for(i=0; hexadecimal[i] != '\0'; i++)  {  
        /*Search through hexDigits array */
        for(j = 0; j < 16; j++){
          if(hexDigits[j] == hexadecimal[i]){
            binaryNumber = binaryNumber*10000 + hexDigitToBinary[j];
          }
        }
    }  
    /* 
     * Now Convert Binary Number to Octal Number   
     */  
    while(binaryNumber != 0) {  
        threeDigits = binaryNumber % 1000;
        /*Search through octalDigitToBinary array */
        for(i = 0; i < 8; i++) {  
            if(octalDigitToBinary[i] == threeDigits) {  
                octalNumber = (i * multiple) + octalNumber;  
                break;  
            }  
        }  
        /* Remove last three digits */
        binaryNumber = binaryNumber/1000;  
        multiple *= 10;  
    }  
    printf("Octal Mumber : %ld", octalNumber);  
   
    return 0;  
}