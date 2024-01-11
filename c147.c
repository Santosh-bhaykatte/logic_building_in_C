// program to reverse any number
#include<stdio.h>

int main()
{
    int n, d, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for( ; n > 0 ; )
    {
        d = n % 10;
        rev = d + rev * 10 ; // Imp
        n = n / 10;
    }
    printf("Reverse = %d\n", rev);

    return 0;
}