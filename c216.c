// program to print all whole numbers (Integers) between a negative number and a positive number
#include<stdio.h> 

int main()
{
    int n, i;
    printf("\nEnter a number : ");
    scanf("%d", &n);

    // loop for whole numbers
    for(i = -n; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
