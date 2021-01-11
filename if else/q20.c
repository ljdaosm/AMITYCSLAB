//wap to find profit or loss
#include<stdio.h>
int main()
{
    float sp,cp;
    float profit,loss;
    printf("Enter selling price: ");
    scanf("%f",&sp);
    printf("Enter cost price: ");
    scanf("%f",&cp);

    if (sp>cp)
    {   
        profit=((sp-cp)/cp)*100;
        printf("%f percent profit",profit);
    }
    else if (cp>sp)
    {
        loss=((cp-sp)/cp)*100;
        printf("%f percent loss",loss);
    }
    else
    {
        printf("No profit or loss !");
    }
    return 0;
}