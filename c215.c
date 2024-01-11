// program to find sum of factors of a number
#include<stdio.h>

int sum_of_divisors(int n)
{
    int i, sum = 0;
    for(i=1; i<n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);

    printf("\nSum = %d\n", sum_of_divisors(num));

    return 0;
}