// User-defined power function
#include<stdio.h>

int Power(int n1, int n2);

int main()
{
    int a,b;
    printf("Enter number : ");
    scanf("%d", &a);
    printf("Enter power : ");
    scanf("%d", &b);

    printf("%d to the power %d = %d\n", a, b, Power(a, b));

    return 0;
}

int Power(int n1, int n2)
{
    int i, power = 1;
    
    for(i=1; i<=n2; i++)
    {
        power = power * n1;
    }
    return power;
}