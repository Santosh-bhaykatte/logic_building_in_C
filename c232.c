// program to print factors of number using recursion
#include<stdio.h>

int i = 1;
int Factors(int n)
{
    if(n % i == 0)
    {
        printf("%d, ", i);
    }
    
    if(i == n)
    {
        return 0;
    }

    i++;
    Factors(n);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    printf("Factors of %d : ", n);
    Factors(n);

    return 0;
}