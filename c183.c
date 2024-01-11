// program to print x1/1! + x3/3! + x5/5! + ......+ xm/m!
#include<stdio.h>

int power (int m, int n)
{
    int x = 1;
    int y = m;

    if(n == 0)
    {
        return 1;
    }

    for(int i=1; i<=n; i++)
    {
        m = m * x;
        x = y;
    }
    return m;
}

int main()
{
    int x, n, m, sum = 0, fact, j;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter last term (odd) : ");
    scanf("%d", &m);

    for(n=1; n<=m; n+=2)
    {
        // factorial
        fact = 1;
        for(j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        sum = sum + (power(x, n)/fact);
    }
    printf("Sum = %d\n", sum);

    return 0;
}