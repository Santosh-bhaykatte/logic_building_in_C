// program to find HCF / GCD of given two numbers
// Highest common factor / greatest common divisor
// Two methods
// eg. 6 & 8 = 2
#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);


    // while(n1 != n2)
    // {
    //     if(n1 > n2)
    //     {
    //         n1 = n1 - n2;
    //     }
    //     else{
    //         n2 = n2 - n1;
    //     }
    // }

    // printf("GCD = %d\n", n1);

    int i, HCF;

    for(i = 1; i < n1 || i < n2; i++)
    {
        if(n1 == n2)
        {
            HCF = n1;
            break;
        }

        if(n1 % i == 0 && n2 % i == 0)
        {
            HCF = i;
        }
    }

    printf("HCF = %d\n", HCF);

    return 0;
}