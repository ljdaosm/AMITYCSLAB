#include<stdio.h>
char oddeven(int x);
char oddeven(int x)
{
    if (x%2==0)
    {
        return ('E');
    }
    else
    {
        return ('O');
    }
    
}
int main()
{
    int x;
    char z;

    printf("Enter the number :");
    scanf("%d",&x);
    z=oddeven(x);
    printf("%c",z);

    return 0;
    
}