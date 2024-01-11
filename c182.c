// program to print x1/1 + x2/2 + x3/3 +.... + xm/m
#include<stdio.h>
#include<math.h>

int main()
{
    int x, m, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter last term : ");
    scanf("%d", &m);

    for(int i=1; i<=m; i++)
    {
        sum = sum + ( pow(x, i)/i ) ;
    }
    printf("Sum = %d\n", sum);

    return 0;
}
