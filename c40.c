// numbers divisible by 4 from 1 to 50 and their sum
#include<stdio.h>

int main()
{
    int sum = 0 ;
    for(int j=1; j<=50; j++)
    {
        if(j % 4 == 0)
        {
            sum = sum + j ; 
            printf("%d\n", j);
        }
    }

    printf("sum is %d\n", sum);

    return 0;
}

