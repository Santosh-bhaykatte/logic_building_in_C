// Program to print Table of 'n' using recursion
// RECURSION
#include<stdio.h>

int printSeries(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printSeries(n);

    return 0;
}

int mult = 0;

int printSeries(int n)
{
    if(mult == 10)
    {
        return 0;
    }
    mult = mult + 1;
    printf("%d\n", n*mult);
    printSeries(n);
}