// calculate Compound intrest 
#include<stdio.h>
#include<math.h>

int main()
{
    float p , r , n ;
    printf("Enter principle : ");
    scanf("%f", &p);
    printf("Enter intrest rate : ");
    scanf("%f",&r);
    printf("Enter no. of years : ");
    scanf("%f", &n);

    float CI = p * (pow(1 + (r/100), n));
    float tot = p + CI ;
    printf("Compound Intrest : %f\n", CI);
    printf("Total Payable : %f", tot);

    return 0;
}
