// wap to calc grade of subjects
#include<stdio.h>
int main()
{
    float a[5];
    int i;
    printf("Enter percentages in given order: physics, chemistry, maths, bio and comp sc:\n");

    for (i=0;i<=4;i++)
    {
        printf("subject %d: ",i+1);
        scanf("%f",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        if (a[i]>=90)
        {
            printf("grade A\n");
        }
        
        else if (a[i]>=80)
        {
            printf("grade B\n");
        }

        else if (a[i]>=70)
        {
            printf("grade C\n");
        }

        else if (a[i]>=60)
        {
            printf("grade D\n");
        }

        else if (a[i]>=40)
        {
            printf("grade E\n");
        }

        else
        {
            printf("grade F\n");
        }
    }
    return 0;
}
