// logic of prime numbers - numbers which are divisible by 1 and itself
// print them from 1 to 100

#include<stdio.h>

int main()
{
    int prime;
    for(int i=2; i<=100; i++)
    {
        prime = 1;

        for(int j=2; j<=i-1; j++)
        {
            if(i%j==0)
            { 
               prime = 0;
               break; 
            }
        }
        if(prime)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

