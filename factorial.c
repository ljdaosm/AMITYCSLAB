#include <stdio.h>
int fact(int n);

int fact(int n)
    { 
    if (n == 0) 
        return 1; 
    return n * fact(n - 1); 
    }
        
int main() 
{
    int i,n,number;
    printf("enter the number:");
    scanf("%d",&n);

    number=fact(n);
    printf("%d",number);
    
    return 0;
}