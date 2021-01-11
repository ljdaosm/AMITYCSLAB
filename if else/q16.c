// wap to check if angles of triangle are valid or not
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter val of angle X: ");
    scanf("%d",&x);
    printf("Enter val of angle Y: ");
    scanf("%d",&y);
    printf("Enter val of angle Z: ");
    scanf("%d",&z);

    if (x+y+z==180)
    {
        printf("Triangle is valid !!!");
    }
    else
    {
        printf("Invalid triangle!");
    }
    return 0;
    
}