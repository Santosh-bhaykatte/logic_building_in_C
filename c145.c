// count no. of digits in given number
#include<stdio.h>

int main()
{
    int n, d, count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for( ; n > 0; )
    {
        d = n % 10;
        n = n / 10;
        count++;
    }
    printf("count = %d\n", count);

    return 0;
}