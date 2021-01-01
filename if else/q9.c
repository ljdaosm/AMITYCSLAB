//c prog to check if element is alphabet, digit or spl char
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);

    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("Entered character is an alphabet !!");
    }
    else if(c>='0' && c<='9')
    {
        printf("Entered characeter is a number !!");
    }
    else
    {
        printf("Entered character is a special character !!");
    }
    return 0;    
}