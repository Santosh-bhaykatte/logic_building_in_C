// array program // print Final prices of three products
#include<stdio.h>

int main()
{
    float price[3]; // float array

    printf("Enter 1st price : ");
    scanf("%f", &price[0]);
    
    printf("Enter 2nd price : ");
    scanf("%f", &price[1]);

    printf("Enter 3rd price : ");
    scanf("%f", &price[2]);

    printf("\nFinal price 1 : %f\n", price[0] + 0.18 * price[0]);
    printf("Final price 2 : %f\n", price[1] + 0.18 * price[1]);
    printf("Final price 3 : %f\n", price[2] + 0.18 * price[2]);

    return 0;
}

