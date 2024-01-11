// program to print all odd numbers and their sum from 'm' to 'n'
#include<stdio.h>

int sum = 0, count = 0;

int printOdd(int m, int n)
{
    if(m % 2 != 0)
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
    printOdd(m, n);
}

int main()
{
    int m, n;
    printf("Enter first term : ");
    scanf("%d", &m);    
    printf("Enter last term : ");
    scanf("%d", &n);    
    
    printf("Odd Numbers : \n");
    printOdd(m, n);
    printf("Count = %d\n", count);
    printf("Sum = %d\n", sum);

    return 0;
}