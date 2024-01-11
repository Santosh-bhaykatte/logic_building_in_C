// User-defined function to find square root of number 
//sqrt()

#include<stdio.h>

int printSqrt(int n)
{
    int count = 1, srt = 1;

    while(srt <= n)
    {
        count++;
        srt = count * count;
    }
    return count - 1;
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Square root of %d is %d\n", num, printSqrt(num));

    return 0;
}