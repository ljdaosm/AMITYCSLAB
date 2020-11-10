// wap to find sum of first and last digits of a number

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

    printf("Sum of first and last digits = %d\n", first+last);
    


    return 0;

}  