//C Program to Convert Binary to Octal
#include <stdio.h>
int main()
{
    long int b, o = 0, j = 1, r;
 
    printf("Enter the value for  binary number: ");
    scanf("%ld", &b);
    while (b != 0)
    {
        r = b % 10;
        o = o + r * j;
        j = j * 2;
        b= b / 10;
    }
    printf("Equivalent octal value: %lo", o);
    return 0;
}