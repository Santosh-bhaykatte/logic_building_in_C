// program to print x1/1! + x2/2! + .... + xm/m!
#include<stdio.h>

int power(int a, int b)
{
    int i, j = a;
    for(i = 1; i < b; i++)    
    {
        a = a * j;
    }
    return a;
}

int main()
{
    int i, n, m, fact = 1, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter mth term : ");
    scanf("%d", &m);

    for(i = 1; i <= m; i++)
    {
        fact = fact * i;
        sum = sum + power(n, i)/fact; 
    }
    printf("Sum = %d\n", sum);

    return 0;
}