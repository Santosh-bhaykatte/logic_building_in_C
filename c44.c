// keep taking numbers as input from user until user enters an odd number 
#include<stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter a number : ");
        scanf("%d", &n);
        if(n % 2 != 0)
        {
            break;
        }
    } while(1); // 1 - condition is always true

    return 0;
}
