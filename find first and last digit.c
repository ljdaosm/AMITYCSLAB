// write a c program to find last and first digit of a number

#include<stdio.h>
int main()
{
    int n,first,last;
    printf("Enter the number: ");
    scanf("%d",&n);

    last= n%10;
    
    first=n;
    
    while(first>=10)
    {
        first=first / 10;
    }

    printf("First digit = %d\n", first);
    printf("Last digit = %d", last);

    return 0;

}  