// display 4, 8, 12, 16, ... k
#include<stdio.h>

int main()
{
    int k;
    printf("Enter a number : ");
    scanf("%d", &k);
    int i = 4;
    do
    {
        printf("%d\n", i);
        i = i + 4;
    }while(i<=k);

    return 0;
}