// program to print x1/1! - x2/2! - x3/3! -.... - xm/m!
#include<stdio.h>

int Power(int m, int n)
{
    int x = 1;
    int y = m;

    if(n == 0)
    {
        return 1;
    }
    
    for(int i = 1; i <= n; i++)     
    {
        m = m * x;
        x = y;
    }
    return m;
}

int main()
{
    int x, n, fact = 1, m, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter mth term : ");
    scanf("%d", &m);

    for(n=1; n<=m; n++)
    {
        fact = fact * n;
        sum = sum + (-1) * (Power(-x, n)/fact) ;
    }
    printf("Sum = %d\n", sum);

    return 0;
}