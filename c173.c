// program to print table of a number without using multiplication (logical)
#include<stdio.h>

void printTable(int n)
{
    int i = n, j;
    for(j = 1; j <= 10; j++)
    {
        printf("%d\n", i);
        i = i + n;
    }
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printTable(num);

    return 0;
}