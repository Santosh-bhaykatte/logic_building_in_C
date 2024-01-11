// program to print composite numbers from 1 to 100  and their sum 
// numbers which are not prime are composite numbers
// 1 is neither prime nor composite
#include<stdio.h>

int main()
{
    int b, prime, sum = 0;
    for(int i=2; i<=100; i++)
    {
        prime = 1;
        
        for(b=2; b<i-1; b++)
        {
            if(i%b==0)
            {
                prime = 0;
                sum = sum + i;
                break;
            }
        }
        if(prime)
        {
            continue;
        }
        else{
            printf("%d\n", i);
        }
    }
    
    printf("Sum is %d", sum);

    return 0;
}