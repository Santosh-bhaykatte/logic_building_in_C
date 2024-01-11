// program to print all even numbers and their sum from 'm' to 'n'
#include<stdio.h>

int sum = 0, count = 0;

int printEven(int m, int n)
{
    if(m % 2 == 0)
    {
        printf("%d\n", m);
        count++;
        sum = sum + m;
    }
    
    if(m == n)
    {
        return 0;
    }

    m++;
    printEven(m, n);
}

int main()
{
    int m, n;
    printf("Enter first term : ");
    scanf("%d", &m);    
    printf("Enter last term : ");
    scanf("%d", &n);    
    
    printf("Even Numbers : \n");
    printEven(m, n);
    printf("Count = %d\n", count);
    printf("Sum = %d\n", sum);

    return 0;
}