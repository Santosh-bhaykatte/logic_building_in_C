// function to print 'n' th term of fibonacci sequence (Recursion)
// 0, 1, 1, 2, 3, 5, 8, 13, 21 ....
#include<stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d th term of fibonacci seq is %d", n, fib(n));

    return 0;
}

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    int FibNm2 = fib(n-2);
    int FibNm1 = fib(n-1);
    int FibN = FibNm2 + FibNm1;
    return FibN;
}
