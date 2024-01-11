// Average of three numbers
#include<stdio.h>

int main()
{
    int a , b , c , tot;
    float avg ;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    tot = a + b + c;
    avg = tot/3 ;
    printf("Average : %f", avg);
    return 0;
}