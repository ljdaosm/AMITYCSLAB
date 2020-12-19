#include <stdio.h>
 
int main()
{
    int b, h = 0, i = 1, r;
 
    printf("Enter the binary number: ");
    scanf("%d", &b);
    while (b != 0)
    {
        r = b % 10;
        h = h + r * i;
        i = i * 2;
        b = b / 10;
    }
    printf("Equivalent hexadecimal value: %lX", h);
    return 0;
}