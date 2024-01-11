// Call by value & Call by address  

#include<stdio.h>

void square(int);
void _square(int *);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
     
    square(n);
    printf("n = %d\n", n);

    _square(&n);
    printf("n = %d\n", n);

    return 0;
}

// call by value
void square(int n)
{
    n = n * n ;
    printf("n = %d\n", n);
}

// call by address
void _square(int *n)
{
    (*n) = (*n) * (*n);
    printf("n = %d\n", *n);
}

// Conclusion - When we pass pointers as function arg. then Call by Address occurs 