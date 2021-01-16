//c function to find if number is odd or even
int oddeven(int x);

int oddeven(int x)
{
    if (x%2==0)
    {
        printf("X is even");
    }
    else 
    {
        printf("X is odd");
    }
}

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of X: ");
    scanf("%d",&x);

    y=oddeven(x);
    return 0;
}