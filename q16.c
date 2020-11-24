//enter number and print reverse
#include<stdio.h>
int main()
{
    int x,y=0,z;

    printf("Enter the number to be reversed: ");
    scanf("%d",&x);

    while(x!=0)
    {
        z=x%10;
        y=z + y*10;
        printf("%d\n",y);
        x/=10;
        printf("%d\n",x);
    }

    printf("Reversed number is: %d",y);
    return 0;
}