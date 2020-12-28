//c program to find max between 3 numbers
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    printf("Enter the value of Y: ");
    scanf("%d",&y);
    printf("Enter the value of Z: ");
    scanf("%d",&z);
    
    if (x>y && x>z)
    {
        printf("X is the greatest number !");
    }
    else if (y>x && y>z)
    {
        printf("Y is the greatest number !");
    }
    else if (z>x && z>y)
    {
        printf("Z is the greatest number !");
    }
    else
    {
        printf("All the numbers are equal !");
    }
    return 0;
}