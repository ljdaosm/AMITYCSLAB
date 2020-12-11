//find all prime factors of a number
#include<stdio.h>
int main()
{
    int x,i,j,c;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("The prime factors of %d are\n",x);

    for (i=2;i<=x;i++)
    {
        if (x%i==0)
        {   
            c=1;
            for (j=2;j<=i/2;j++)
            {
                if (i%j==0)
                {
                   c=0;
                   break;
                }
            }
            if (c==1)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}