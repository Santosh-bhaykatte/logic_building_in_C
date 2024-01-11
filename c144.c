// check whether a given number is prime number or not - a number which is divisible by 1 and itself
// Important
#include<stdio.h>

int main()
{
    int n, prime = 1 ;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            prime = 0;
            break;
        }
    }
    if(prime)
    {
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number", n);
    }

    return 0;
}