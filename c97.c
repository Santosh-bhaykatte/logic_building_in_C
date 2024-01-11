// whether seller has made profit or loss and how much 
#include<stdio.h>

int main()
{
    float cp, sp, p, l;
    printf("Enter cost price : ");
    scanf("%f", &cp);
    printf("Enter selling price : ");
    scanf("%f", &sp);

    p = sp - cp ;
    l = cp - sp ;

    if(p>0)
    {
        printf("Seller has made profit of Rs %f\n", p);
    }
    if(l>0)
    {
        printf("Seller has made loss of Rs %f\n", l);
    }
    if(p==0)
    {
        printf("there is no profit , no loss\n");
    }

    return 0;
}