//sum of even natural numbers till n

#include<stdio.h>
int main()
{
    int x, y, sum=0;
    printf("Enter the range: ");
    scanf("%d",&x);

    for (y=2; y<=x; y+=2)
    {
        sum+=y;    
    }
    
    printf("Sum of all even numbers from 2 to %d is: %d",x,sum);
    return 0;
}