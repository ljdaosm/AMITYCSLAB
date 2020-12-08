#include<stdio.h>
int main()
{
    int n,i,x,c=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter the index number %d: ",i+1);
        scanf("\n%d",&a[i]);
        
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        if (a[i]==x)
            {
                c+=1;
            }
        
}
    printf("The number of times the element was found: %d",c);  
    return 0;
}    
