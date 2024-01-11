// sum of digits of four digit number
#include<stdio.h>

int main()
{
    int n, d1, d2, d3, d4;
    printf("Enter a four digit number : ");
    scanf("%d", &n);
    d1 = n % 10 ;
    n = n / 10 ;
    d2 = n % 10 ;
    n = n / 10 ;
    d3 = n % 10 ;
    n = n / 10 ;
    d4 = n % 10 ;

    int sum = d1 + d2 + d3 + d4 ;
    printf("Sum of digits : %d", sum);

    return 0;
}