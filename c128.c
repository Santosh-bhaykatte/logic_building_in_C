// 1, 3, 7, 13......k
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i = 1;
    int j = 2;
    
    while(i<=n)
    {
        printf("%d\n", i);
        i = i+j;
        j = j+2;
    }

    return 0;
}