// Factorial of 'n' using recursion
#include<stdio.h>

int Fact(int n);

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    printf("Factorial of %d is %d\n", x, Fact(x));

    return 0;
}

int Fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int FactNm1 = Fact(n-1);
    int FactN = FactNm1 * n;
    return FactN;
}