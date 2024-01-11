// program to make user defined function to find cube root of given number 
// eg. 3 cube root of 27
#include<stdio.h>

int print_Cube_root(int n)
{
    int count = 1, crt = 1;

    while (crt <= n)
    {
        count++;
        crt = count*count*count;
    }
    return count - 1;
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Cube root of %d is %d\n", num, print_Cube_root(num));

    return 0;
}
