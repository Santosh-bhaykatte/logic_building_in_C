// Calculating Simple Intrest
#include<stdio.h>

int main()
{
    float prin, roi  , SI , tot;
    int t;
    printf("Enter principle : ");
    scanf("%f", &prin);
    printf("Enter Intrest rate : ");
    scanf("%f", &roi);
    printf("Enter No. of years : ");
    scanf("%d", &t);

    SI = (prin*roi*t)/100 ;

    tot = prin + SI ;

    printf("Intrest : %f\n", SI);
    printf("Total_payable : %f\n", tot);


    return 0;
}