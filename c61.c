// celcius to farahenite conversion using function
#include<stdio.h>

float convertTemp(float celcius)
{
    return (celcius * 1.8) + 32 ;
}

int main()
{
    float celcius;
    printf("Enter temperature : ");
    scanf("%f", &celcius);

    printf("temp = %f F", convertTemp(celcius));

    return 0;
}
