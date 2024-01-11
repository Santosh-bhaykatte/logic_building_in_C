// -1, 1, 0, 1, 1, 2, 3, 5, 8, 13, ..... n
#include<stdio.h>

void storeFib(int *, int);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = -1;
    fib[1] = 1;
    
    printf("%d\n%d\n", fib[0], fib[1]);
    storeFib(fib, n);

    return 0;
}

void storeFib(int fib[], int n)
{
     for(int i = 2; i<=n; i++)
     {
        fib[i] = fib[i-2] + fib[i-1];
        printf("%d\n", fib[i]);
     }
}
