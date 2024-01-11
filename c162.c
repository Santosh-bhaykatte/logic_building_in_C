// program to find sum of alternate digits of given number
#include<stdio.h>

int main()
{
    int num, d, sum1 = 0, sum2 = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i=1; num != 0; i++)
    {
        d = num % 10;
        num = num / 10;

        if(i % 2 == 1)
        {
            sum1 = sum1 + d;
        }
        else
        {
             sum2 = sum2 + d;
        }
        
    }

    printf("Sum1 = %d\nSum2 = %d\n", sum1, sum2);

    return 0;
}