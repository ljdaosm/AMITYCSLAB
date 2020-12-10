//find if number is prime or not
#include<stdio.h>
int main()
{
    int x,i,c=0;
    printf("Enter the number: ");
    scanf("%d",&x);

    for (i=2;i<=x;i++)
    {
        if (x%i==0)
        {
            c+=1;
        }
    }
    if (c==1)
    {
        printf("The number is a prime!");
    }
    else
    {
        printf("The number is not a prime!");
    } 

    return 0;
}