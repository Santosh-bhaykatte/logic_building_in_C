// array to store sequence of 'n' fibonacci numbers
// fibonacci sequence using loop
// call by address
#include<stdio.h>

void storeFib(int arr[], int n);
void printFib(int arr[], int n);

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    // fibonacci seq array
    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    storeFib(fib, n);
    printf("Fibonacci sequence : ");
    printFib(fib, n);

    return 0;
}

void storeFib(int arr[], int n)
{
    for(int i=2; i<n; i++)
    {
        arr[i] = arr[i-2] + arr[i-1];
    }
}

void printFib(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

