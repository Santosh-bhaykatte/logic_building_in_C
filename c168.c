// program to print table of a number using recursion
#include<stdio.h>

int mult = 0;

int printTable(int n)
{
    if(mult == 10)
    {
        return 0;
    }
    mult = mult + 1;
    printf("%d * %d = %d\n",n ,mult, mult*n);
    printTable(n);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printTable(n);

    return 0;
}