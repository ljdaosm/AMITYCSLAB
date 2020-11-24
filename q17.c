//check if number is palindrome

#include<stdio.h>
int main()
{
    int x,y=0,z,a;

    printf("Enter the number to be reversed: ");
    scanf("%d",&x);
    a=x;

    while(x!=0)
    {
        z=x%10;
        y=z + y*10;
        x/=10;
    }

    if (a==y)
    {
        printf("Yes the number is a palindrome !");
    }
    else
    {
        printf("The number is not a palindrome !");
    }
    
    return 0;
}