// 1 + 2 + 3 + 4 + 5 +.....+ 100
#include<stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);

    return 0;
}