//c program to find if number is +ve -ve or 0
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    
    if (x>0)
    {
        printf("The number is positive!");
    }
    else if (x==0)
    {
        printf("The number is equal to 0 !");
    }
    else 
    {
        printf("The number is negative !");
    }
    return 0;
}