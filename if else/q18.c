//wap to check whether triangle is isoceles, equilateral or scalene
#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter side 1: ");
    scanf("%f",&x);
    printf("Enter side 2: ");
    scanf("%f",&y);
    printf("Enter side 3: ");
    scanf("%f",&z);

    if ((x==y) && (y==z))
    {
        printf("Triangle is equilateral!");
        
    }
    else if ((x==y) || (y==z) ||(x==z))
    {
        printf("Triangle is isoceles!");
    }
    else
    {
        printf("Triangle is scalene!!");
    }
    return 0;
    
}