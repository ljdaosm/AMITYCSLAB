#include<stdio.h>
int main()
{
    int a[5],i,x,c=0;
    for (i=0;i<5;i++)
    {
        printf("Enter the index number %d: ",i+1);
        scanf("\n%d",&a[i]);
        printf("%d",a[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&x);
    for (i=0;i<=4;i++)
    {
        if (a[i]==x)
            {
                printf("The number has been found at index: %d",i);
            }
        else if (i==4)
            {
                printf("Not found !");
            } 
    }
    return 0;
}    
