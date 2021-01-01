//c prog to print the day of the week
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the day number: ");
    scanf("%d",&x);

    if (x==1)
    {
        printf("MONDAY");
    }
    else if (x==2)
    {
        printf("TUESDAY");
    }
    else if (x==3)
    {
        printf("WEDNESDAY");
    }
    else if (x==4)
    {
        printf("THURSDAY");
    }
    else if (x==5)
    {
        printf("FRIDAY");
    }
    else if (x==6)
    {
        printf("SATURDAY");
    }
    else if (x==7)
    {
        printf("SUNDAY");
    }
    else
    {
        printf("Wrong input !");
    }
    return 0;
    
}