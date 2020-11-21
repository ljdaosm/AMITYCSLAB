#include<stdio.h>
float diameter(float r);
float area(float r);
float circumference(float r);

float diameter(float r)
{
    return (r*2);
}
float area(float r)
{
    return (3.14*r*r);
}
float circumference(float r)
{
    return (2*r*3.14);
}

int main()
{
    float r,a,d,c;
    printf("enter the radius of the circle: ");
    scanf("%f",&r);
    
    d=diameter(r);
    a=area(r);
    c=circumference(r);

    printf("the diameter of the circle is: %f\n",d);
    printf("the area of the circle is: %f\n",a);
    printf("the circumference of the circle is: %f",c);
    return 0;
    
}