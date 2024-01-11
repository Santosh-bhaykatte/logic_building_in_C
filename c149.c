// program to check whether a given 3 digit number is Armstrong number or not

// Armstrong number is a number which is equal to sum of it`s digits raised to power of count of its digit  

#include<stdio.h>

int main()
{
    int n, num, d, sum = 0;
    printf("Enter three digit number : ");
    scanf("%d", &n);

    num = n;

    while(n > 0)
    {
        d = n % 10;
        sum = sum + d*d*d;
        n = n / 10;
    }

    if(sum == num)
    {
        printf("%d is Armstrong number", num);
    }
    else{
        printf("%d is not Armstrong number", num);
    }
    
    return 0;
}