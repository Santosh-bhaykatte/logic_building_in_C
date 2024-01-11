// program to make user-defined pow() function  |  m ^ n
#include<stdio.h>

int power(int m, int n)
{
    int i, j;

    if(n == 0)
    {
        return 1;
    }
    
    for(i = 1, j = m; i < n; i++)
    {
        m = m * j;
    }
    return m;
}

int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter power : ");
    scanf("%d", &b);

    printf("%d to the power %d = %d\n", a, b, power(a, b));

    return 0;
}
