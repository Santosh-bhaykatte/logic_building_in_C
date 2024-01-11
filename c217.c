// Two numbers are entered through keyboard, find the value of one number raised to power of another
// =========== do not use library function ========
#include<stdio.h>
// #include<math.h>

int main()
{
    int i, n1, n2, power = 1;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);

    // power = pow(n1, n2);
    
    for(i=1; i<=n2; i++)
    {
        power = power * n1;
    }
    printf("Power = %d\n", power);

    return 0;
}