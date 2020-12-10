//find sum of all prime numbers till n
#include<stdio.h>
int main()
{
    int n,i,c,j,x=0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        c=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
        {
            printf("%d " ,i);
            x=x+i;
        }
    }
    printf("\nThe sum of all prime numbers till n is: %d",x);
    return 0;
}