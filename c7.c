// dollar to rupee conversion
#include<stdio.h>

int main()
{
    float dollar ;
    printf("Enter amount in dollar : ");
    scanf("%f", &dollar);

    float rupee = 80.23 * dollar ;

    printf("Rs %f", rupee);

    return 0;
}
