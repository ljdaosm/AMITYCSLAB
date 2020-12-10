//find HCF of two numbers
#include<stdio.h>
int main()
{
    int x,y,a=1;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);

    while (a=1)
    {
        if (x>y)
        {
            x=x-y;
        }
        else if (y>x)
        {
            y=y-x;
        }
        else
        {
            printf("The HCF of the two numbers is %d",x);
            break;
        }
    }
    return 0;
}