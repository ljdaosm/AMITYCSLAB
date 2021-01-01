//c prog to check whether alphabet is lower case or upper case
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the alphabet: ");
    scanf("%c",&c);

    if (c>='a' && c<='z')
    {
        printf("lower case alphabet!");
    }
    else if(c>='A' && c<='Z')
    {
        printf("Upper case alphabet!");
    }
    else
    {
        printf("Wrong input !");
    }
    return 0;    
}