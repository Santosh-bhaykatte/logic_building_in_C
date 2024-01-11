// returning multiple values from function using pointer ( Call by value and Call by address )
// Note - A function can return only one value at a time
#include<stdio.h>

void doWork(int , int , int *, int *, int *);

int main()
{
    int n1, n2, sum, prod, avg;
    printf("Enter number 1 : ");
    scanf("%d", &n1);
    printf("Enter number 2 : ");
    scanf("%d", &n2);

    doWork(n1, n2, &sum, &prod, &avg);
    printf("Addition = %d\nproduct = %d\nAverage = %d\n", sum, prod, avg);

    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}