#include<stdio.h>
int cube(int x);
int cube(int x)
{
    return (x*x*x);
}
int main()
{   
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    
    y=cube(x);
    printf("The cube of %d is %d",x,y);
    return 0;

}