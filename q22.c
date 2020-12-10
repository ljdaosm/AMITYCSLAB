//find factors of a number
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the number: ");
    scanf("%d",&x);

    for (i=1;i<=x;i++)
    {
        if (x%i==0)
        {
            printf("%d is a factor of %d\n",i,x);
        }
    }
    return 0;
}