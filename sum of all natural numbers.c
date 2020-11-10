#include <stdio.h>
int main() 
{
    int x, i=1, sum = 0;
    printf("Enter the natural number: ");
    scanf("%d", &x);
    
    while (i <= x) 
    {
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
}