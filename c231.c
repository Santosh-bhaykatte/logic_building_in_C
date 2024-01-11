// program to print Reverse table using recursion
#include<stdio.h>

int mult = 0, val;

int Rev_Table(int n)
{
    if(mult == 10)
    {
        return 0;
    }

    val = 10 - mult;
    printf("%d * %d = %d\n", n, val, n*val);
    mult++;

    Rev_Table(n);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    Rev_Table(n);

    return 0;
}