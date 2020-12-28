//c prog to finf if number is divisible by 5 and 11
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    
    if (x%2==0)
    {
        printf("The number is even");
    }
    else 
    {
        printf("The number is odd");
    }
    
    return 0;
}
