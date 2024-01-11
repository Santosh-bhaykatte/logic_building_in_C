// power of number
#include<stdio.h>
#include<math.h>
int main()
{
    int n, power;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter power : ");
    scanf("%d", &power);

    printf("Ans = %f", pow(n,power));

    return 0;
}