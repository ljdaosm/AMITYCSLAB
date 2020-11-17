//write c program to find sum of all odd numbers from 1 to n

#include<stdio.h>
int main()
{
    int x, y, sum=0;
    printf("Enter the range: ");
    scanf("%d",&x);

    for (y=1; y<=x; y+=2)
    {
        sum+=y;    
    }
    
    printf("Sum of all odd numbers from 1 to %d is: %d",x,sum);
    return 0;
}
