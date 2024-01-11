// program to print LCM of two numbers
#include<stdio.h>

int main()
{
    int n1, n2, LCM;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);

    int max = n1 > n2 ? n1 : n2;
    
    while(1)
    {
        if(max % n1 == 0 && max % n2 == 0)
        {
            LCM = max;
            break;
        }
        max++;
    }
    printf("LCM = %d\n", LCM);

    return 0;
}