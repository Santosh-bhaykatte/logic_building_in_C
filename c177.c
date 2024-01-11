// program to print x + x2 + x3 + x4....+ xn
#include<stdio.h>
#include<math.h>

int main()
{
    int x, n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter nth power : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + pow(x, i);
    }
    printf("sum = %d\n", sum);

    return 0;
}