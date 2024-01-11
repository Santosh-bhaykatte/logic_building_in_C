// celcius to farahenite
#include<stdio.h>

int main()
{
    float cel;
    printf("Enter temp in celcius : ");
    scanf("%f", &cel);

    float far = cel * 1.8 + 32 ;

    printf("Temp in farahenite : %f", far);

    return 0;
}
