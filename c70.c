// Swap two numbers a & b 
#include<stdio.h>

void swap(int, int);
void _swap(int *, int *);

int main()
{
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d%d", &a, &b);
     
    printf("Before swapping : \n") ;
    printf("a = %d & b = %d\n", a, b);

    printf("After swapping : \n");
    swap(a, b);
    printf("a = %d & b = %d\n", a, b);

    printf("After swapping : \n");
    _swap(&a, &b);
    printf("a = %d & b = %d\n", a, b);

    return 0;
}

void swap(int a, int b)
{
    int temp = a ;
    a = b;
    b = temp;
}

void _swap(int *a, int *b)
{
    int temp = *a ;
    *a = *b;
    *b = temp;
}
