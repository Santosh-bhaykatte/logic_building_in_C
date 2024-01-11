// 1, 2, 4, 7, ..... k using for loop
#include<stdio.h>

int main()
{
    int k;
    printf("Enter a number : ");
    scanf("%d", &k);

    for(int i=1, j=1; i<=k; j++)
    {
        printf("%d\n", i);
        i += j;
    }

    return 0;
}