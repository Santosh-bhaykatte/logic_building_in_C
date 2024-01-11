// only even natural numbers(reverse) from 1 to 50 and their sum
#include<stdio.h>

int main()
{
    int sum = 0 ;
    for(int j=50; j>=1; j--)
    {
        if(j % 2 == 0)
        {
            sum = sum + j ; 
            printf("%d\n", j);
        }
    }

    printf("sum is %d\n", sum);

    return 0;
}

