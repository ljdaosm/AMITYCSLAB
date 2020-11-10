#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("Enter the integer: ");
    scanf("%d",&a);
    printf("Where do you want to end the table? ");
    scanf("%d",&b);

    for (x=1; x<=b; x++)
    {
        
        c=a*x;
        printf("%d * %d = %d\n",a,x,c);
        
    }
    return 0;
    
}