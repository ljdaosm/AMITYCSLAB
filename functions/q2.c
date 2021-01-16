//c function to find diameter, area and circumference from radius 
float diameter(float radius);
float circumference(float radius);
float area(float radius);

float diameter(float radius)
{
    return radius*2;
}
float circumference(float radius)
{
    return radius*2*3.14;
}
float area(float radius)
{
    return radius*3.14*3.14;
}

#include<stdio.h>
int main()
{
    float radius,x,y,z;
    printf("Enter the radius: ");
    scanf("%f",&radius);

    x=diameter(radius);
    y=circumference(radius);
    z=area(radius);

    printf("The diameter is: %f\n",x);
    printf("The circumference is %f\n",y);
    printf("The area is %f",z);
    return 0;
}