//c prog to finf if number is divisible by 5 and 11
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the year: ");
    scanf("%d",&x);
    
    if (x%4==0)
    {
        printf("Leap year!");
    }
    else 
    {
        printf("The year is not a leap year");
    }
    
    return 0;
}
