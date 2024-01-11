// Will address o/p be same ?
#include<stdio.h>

void printAddress(int *);

int main()
{
    int n = 4 ;

    printf("%p\n", &n);
    printAddress(&n);

    return 0;
}

void printAddress(int *n)
{
    printf("%p\n", n);
}
