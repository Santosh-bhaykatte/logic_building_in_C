// palindrome program
#include<stdio.h>

int main()
{
    int n, temp, d1, d2, d3, d4, rev = 0;
    printf("Enter a four digit number : ");
    scanf("%d", &n);

    temp = n;

    d1 = temp % 10;
    rev = rev + d1*1000;
    temp = temp / 10;
    d2 = temp % 10;
    rev = rev + d2*100;
    temp = temp / 10;
    d3 = temp % 10;
    rev = rev + d3*10;
    temp = temp / 10;
    d4 = temp % 10;
    rev = rev + d4;

    printf("Reverse = %d\n", rev);

    if(rev == n)
    {
        printf("Given number and it`s reversed number is equal \n");
    }
    else{
        printf("Given number and it`s reversed number is not equal \n");
    }

    return 0;
}