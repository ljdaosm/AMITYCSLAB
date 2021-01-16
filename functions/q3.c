//c function to find max and min in 2 numbers
int maxmin(int x, int y);

int maxmin(int x, int y)
{
    if (x>y)
    {
        printf("X is greater than Y");
    }
    else if (y>x)
    {
        printf("Y is greater than X");
    }
    else
    {
        printf("X and Y are equal");
    }
}

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter Y: ");
    scanf("%d",&y);
    
    z=maxmin(x,y);
    return 0;
}

