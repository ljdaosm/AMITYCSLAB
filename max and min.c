#include<stdio.h>
//function for finding max and min
void maxmin(int x,int y);
void maxmin(int x, int y)
{
    if (x>y)
    {
        printf("The greater number is %d\n",x);
        printf("Smaller number is %d",y);
    }
    else if (y>x)
    {
        printf("The greater number is %d",y);
        printf("Smaller number is %d",x);
    }
    else
    {
        printf("Numbers are equal");
    }
}

int main()
{
    int x,y;
    
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    maxmin(x,y);

    
    return 0;
}