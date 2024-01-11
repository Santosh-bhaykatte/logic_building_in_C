// program to find GCD / HCF of given two numbers
// GCD - Greatest common divisor
// eg. 6 & 8 =  2
#include <stdio.h>

int main()
{
    int num1, num2, GCD;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }

    printf("GCD = %d\n", GCD);

    return 0;
}