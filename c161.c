// program to check whether a given number is composite or prime
#include<stdio.h>

int main()
{
    int n, prime = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i=2; i<n; i++)
    {
        if(n % i==0)
        {
            prime++;
        }
    }
    if(n == 1)
    {
        printf("%d is neither prime nor composite\n", n);
    }
    else if(prime == 0)
    {
        printf("%d is prime number\n", n);
    }
    else{
        printf("%d is composite number", n);
    }

    return 0;
}