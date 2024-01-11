// program to check whether given two numbers are amicable pair numbers or not
// eg. 220 & 284 are amicable pair numbers
#include<stdio.h>

int main()
{
    int n1, n2, sum1 = 0, sum2 = 0;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);

    // factors of n1
    for(int i=1; i<n1; i++)
    {
        if(n1 % i == 0)
        {
            sum1 = sum1 + i;
        }
    }

    // factors of n2
    for(int i=1; i<n2; i++)
    {
        if(n2 % i == 0)
        {
            sum2 = sum2 + i;
        }
    }

    if(sum1 == n2 && sum2 == n1)
    {
        printf("%d and %d are amicable pair numbers\n", n1, n2);
    }
    else{
        printf("%d and %d are not amicable pair numbers\n", n1, n2);
    }

    return 0;
}