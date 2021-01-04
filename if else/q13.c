// c prog to count total notes
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the amount of money: ");
    scanf("%d",&x);

    printf("The number of 2000R notes is: %d\n",x/2000);
    y=x-(x/2000)*2000;
    printf("500R notes: %d\n",y/500);
    y=y-(y/500)*500;
    printf("200R notes: %d\n",y/200);
    y=y-(y/200)*200;
    printf("100R notes: %d\n",y/100);   
    y=y-(y/100)*100;
    printf("50R notes: %d\n",y/50);
    y=y-(y/50)*50;
    printf("20R notes: %d\n",y/20);
    y=y-(y/20)*20;
    printf("10R notes: %d",y/10);
    return 0;
}