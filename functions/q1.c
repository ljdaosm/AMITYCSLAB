//make a c function to find cube of a number
int cube(int x);

int cube (int x)
{
    return x*x*x;
}

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=cube(x);
    printf("The cube of %d is %d",x,y);
    return 0;

}
