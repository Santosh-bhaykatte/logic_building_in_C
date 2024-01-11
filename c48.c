// Factorial of n  ( 4! = 4 x 3 x 2 x 1 = 24)
#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact * i ;
    }
    printf("\nFactorial is %d\n", fact);
    return 0;
}

