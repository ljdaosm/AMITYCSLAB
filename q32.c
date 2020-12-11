//check if number is a perfect number or not
#include<stdio.h>
int main()
{
    int x,i,s=0;
    printf("Enter the number: ");
    scanf("%d",&x);

    for (i=1;i<=x;i++)
    {
        if (x%i==0)
        {
            printf("%d is a factor of %d\n",i,x);
            s+=i;
        }
    }
    if (s==x*2)
        {
            printf("Yes the given number is a perfect number !!");
        }
    else
        {
            printf("The number is not a perfect number!!");
        }
        
    return 0;
}