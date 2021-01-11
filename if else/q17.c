//wap to find if triangle is valid or not if all sides are given
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

    if ( (x+y>z) && (y+z>x) && (x+z>y) )
    {
        printf("The triangle is valid !!");
    }
    else
    {
        printf("Invalid triangle !");
    }
    return 0;

}