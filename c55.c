// function to print Table of n (Call by address)
#include<stdio.h>

void printTable(int *);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printTable(&n);
    printf("n = %d\n", n);

    return 0;
}

void printTable(int *n)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", *n, i, (*n) * i);
    }
}

