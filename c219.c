// program to print 1/1! + 2/2! + 3/3! + .... + n/n!
#include<stdio.h>

int main()
{
    int i, n, fact = 1, sum = 0;
    printf("Enter nth term : ");
    scanf("%d", &n);

    // loop
    for(i=1; i<=n; i++)
    {
        fact = fact * i;
        sum = sum + (i / fact);
    }
    printf("Sum = %d\n", sum);

    return 0;
}