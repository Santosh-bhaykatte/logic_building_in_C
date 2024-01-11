// function to calculate sum by call by address
#include<stdio.h>

int calcSum(int *, int *);

int main()
{
    int n1, n2;
    printf("Enter num 1 : ");
    scanf("%d", &n1);
    printf("Enter num 2 : ");
    scanf("%d", &n2);

    printf("Sum = %d\n", calcSum(&n1, &n2));
    printf("num1 = %d & num2 = %d\n", n1 , n2);

    return 0;
}

int calcSum(int *a, int *b)
{
    int sum = (*a) + (*b);
    int temp = *a;
    *a = *b;
    *b = temp;
    return sum;
}


