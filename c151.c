// program to check whether a given number is armstrong number or not
#include<stdio.h>
#include<math.h>

int main()
{
    int num, x, y, count = 0, sum = 0, d;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    y = num;
    x = num;

    for( ; y > 0; )
    {
        y = y / 10;
        count++;
    }
    
    for( ; num > 0; )
    {
        d = num % 10;
        sum = sum + pow(d, count);
        num = num / 10;
    }

    if(sum == x)
    {
        printf("%d is Armstrong number", x);
    }
    else{
        printf("%d is not Armstrong number", x);
    }

    return 0;
}
