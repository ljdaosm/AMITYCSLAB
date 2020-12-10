//find LCM of two numbers
#include<stdio.h>
int main()
{
    int x,y,i,h,l;
    printf("Entexr the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);

    for (i=1;i<=x && i<=y;i++)
    {
        if (x%i==0 && y%i==0)
        {
            h=i;
        }
    }
    l=(x*y)/h;
    printf("The LCM of the given numbers is: %d",l);
    return 0;
}