#include <stdio.h>
#include <math.h>
 
int main()
{
 
    int o, d = 0;
    int i = 0;
 
    printf("Enter any octal number: ");
    scanf("%d", &o);
    while (o != 0)
    {
        d =  d +(o % 10)* pow(8, i++);
        o = o / 10;
    }
    printf("Equivalent decimal value: %ld",d);
    return 0;
}