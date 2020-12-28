//c program to find max between two numbers
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    printf("Enter the value of Y: ");
    scanf("%d",&y);
    
    if (x>y)
    {
        printf("X is greater than Y !");
    }
    else if (y>x)
    {
        printf("Y is greater than X !");
    }
    else 
    {
        printf("X and Y are equal !!");
    }
    return 0;
}