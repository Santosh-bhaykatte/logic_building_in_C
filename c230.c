// program to print table using recursion
#include<stdio.h>

int mult = 0, val;

int Rev_Table(int n)
{
    if(mult == 10)
    {
        return 0;
    }

    mult = mult + 1;
    val = n * mult;
    printf("%d * %d = %d\n", n, mult, val);
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