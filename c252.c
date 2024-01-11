// program to find LCF { least common factor } of two numbers

// LCF of two numbers is always 1
#include<stdio.h>

int main()
{
    int n1, n2, LCF;
    printf("Enter first number : ");
    scanf("%d", &n1);

    printf("Enter second number : ");
    scanf("%d", &n2);

    int max = n1 > n2 ? n1 : n2;

    // loop
    for(int i = 2; i <= max; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
             LCF = i;
             break;
        }
    }
    printf("LCF of %d and %d is %d\n", n1, n2, LCF);

    return 0;
}