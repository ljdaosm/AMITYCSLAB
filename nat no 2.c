//print natural numbers from n to 1

#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);


while (n!=0)
    {
        printf("%d\n",n);
        n--;
    }

return 0;
}