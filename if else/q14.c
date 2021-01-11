//c prog to find out number of days in a month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month: ");
    scanf("%d",&month);
    
    if (month==1)
    {
        printf("Jan, 31 days !!");
    }
    else if (month==2)
    {
        printf("Feb, 28/29 days !!");
    }
    else if (month==3)
    {
        printf("Mar, 31 days !!");
    }
    else if (month==4)
    {
        printf("Apr, 30 days !!");
    }
    else if (month==5)
    {
        printf("May, 31 days !!");
    }
    else if (month==6)
    {
        printf("Jun, 30 days !!");
    }
    else if (month==7)
    {
        printf("Jul, 31 days !!");
    }
    else if (month==8)
    {
        printf("Aug, 31 days !!");
    }
    else if (month==9)
    {
        printf("Sep, 30 days !!");
    }
    else if (month==10)
    {
        printf("Oct, 31 days !!");
    }
    else if (month==11)
    {
        printf("Nov, 30 days !!");
    }
    else if (month==12)
    {
        printf("Dec ,31 days !!");
    }
    else 
    {
        printf("wrong input try again");
    }
    return 0;
}
