//print natural numbers till n

#include<stdio.h>
int main()
{
int n, y;
printf("Enter the value of n: ");
scanf("%d",&n);
y=1;

while (y<=n)
    {
        printf("%d\n",y);
        y++;
    }

return 0;
}
