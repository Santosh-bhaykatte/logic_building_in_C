// program to find amicable pair numbers from 1 to 10000
#include<stdio.h>

int sum_of_factors(int n);

int main()
{
    int i, j, num1 , num2;

    for(i=200; i<=10000; i++)
    {
        num1 = i;
        
        for(j=200; j<=10000; j++)
        {
            num2 = j;

            if(num1 == sum_of_factors(num2) && num2 == sum_of_factors(num1) && num1 != num2)
            {
                printf("\n%d , %d\n", num1, num2);
            }
        }
    }

    return 0;
}

int sum_of_factors(int n)
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