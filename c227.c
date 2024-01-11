// program to print series from a to b using recursion
#include<stdio.h>

int printSeries(int m, int n)
{
    printf("%d\n", m);
    if(m == n)
    {
        return 0;
    }
    m++;
    printSeries(m, n);
}

int main()
{
    int m, n;
    printf("Enter first term : ");
    scanf("%d", &m);
    printf("Enter last term : ");
    scanf("%d", &n);

    printSeries(m, n);

    return 0;
}