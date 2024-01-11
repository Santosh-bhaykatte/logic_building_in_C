// Fibonacci sequence upto 'nth' term using loop and array
#include<stdio.h>

void printFib(int arr[], int n);

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    // array
    int Fib[n];

    Fib[0] = 0;
    Fib[1] = 1;

    printf("%d\t%d\t", Fib[0], Fib[1]);

    printFib(Fib, n);

    return 0;
}

void printFib(int arr[], int n)
{
    int i;
    for(i=2; i<=n; i++)
    {
        arr[i] = arr[i-2] + arr[i-1];
        printf("%d\t", arr[i]);
    }
}