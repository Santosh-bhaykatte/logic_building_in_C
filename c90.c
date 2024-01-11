// Swapping two numbers without using a third variable 
#include<stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
   
    printf("Before swapping : \n");
    printf("%d\t%d\n", a, b);

    swap(&a, &b); // call by address

    printf("After swapping : \n");
    printf("%d\t%d", a, b);

    return 0;
}

void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}