//find product of digits
#include<stdio.h>
int main()
{
    int x,y,z=1;

    printf("Enmter the number: ");
    scanf("%d",&x);

    while (x!=0)
    {
        y=x%10;
        z*=y;
        x/=10;
    }

    printf("%d",z);
    return 0;

}