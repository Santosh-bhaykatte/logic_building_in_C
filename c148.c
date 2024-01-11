// program to check given number and it`s reverse is same or not (Palindrome)
#include<stdio.h>

int main()
{
    int n, num, d, rev = 0;
    printf("Enter any number : ");
    scanf("%d", &n);

    num = n;

    while(n > 0)
    {
        d = n % 10;
        n = n / 10;
        rev = rev * 10 + d;
    }
    
    if(rev == num)
    {
        printf("given number and it`s reverse is same\n");
    }
    else{
        printf("given number and it`s reverse are not same\n");
    }

    return 0;
}