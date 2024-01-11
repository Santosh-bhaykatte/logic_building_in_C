// program to print hello using recursion
#include<stdio.h>

int printHello(int n)
{
    if(n==0)
    {
        return 0;
    }
    printf("Hello\n");
    printHello(n-1);
}

int main()
{
    printHello(5);

    return 0;
}
