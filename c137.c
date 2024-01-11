// display odd numbers that are divisible by 11 upto 1000
#include<stdio.h>

int main()
{
    for(int i=1; i<=1000; i++)
    {
        if(i % 2 == 1 && i % 11 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}