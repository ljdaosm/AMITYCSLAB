//wap to calc electricity bill
#include<stdio.h>
int main()
{
    float u,c;
    printf("Enter the units consumed: ");
    scanf("%f",&u);

    if (u>50);
    {
        u=u-50;
        c=50*0.5;
        
        if (u>100)
        {
            u=u-100;
            c=c+100*0.75;

            if (u>200)
            {
                u=u-200;
                c=c+200*1.20;

                if (u>250)
                {
                    c=c+u*1.50;
                }
            }
        }
    }
    printf("total amount is %f",(c/100)*20+c);
    return 0;
}