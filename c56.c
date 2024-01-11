// function to calculate total price - Call by Address

#include<stdio.h>

void calculatePrice(float *);

int main()
{
    float value;
    printf("Enter price : ");
    scanf("%f", &value);

    calculatePrice(&value);
    printf("\nNet price = %f", value);

    return 0;
}

void calculatePrice(float *value)
{
    *value = *value + (0.18 * (*value)) ;
    printf("Total price = %f", *value);
}
