// Sum of digits of given number 
#include<stdio.h>

int main()
{
    int n, num, d, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    num = n;

    for(  ; n>0 ; )
    {
        d = n % 10;
        sum = sum + d ;
        n = n / 10;
    }
    printf("Sum of digits of %d is %d", num , sum);

    return 0;
}