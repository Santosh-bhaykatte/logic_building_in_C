// program to print GCD of two numbers (HCF)
#include<stdio.h>

int main()
{
    int num1, num2, GCD;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    while(num1 != num2)
    {
        if(num1 > num2)
        {
            num1 = num1 - num2 ;
        }
        else{
            num2 = num2 - num1 ;
        }
    }
    printf("GCD is %d\n", num1);

    return 0;
}