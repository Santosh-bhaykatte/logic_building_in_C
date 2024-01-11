// display 5, 10, 15, .... k
#include<stdio.h>

int main()
{
    int k;
    printf("Enter a value : ");
    scanf("%d", &k);

    int i=5;
    while(i<=k)
    {
        printf("%d\n", i);
        i = i + 5;
    }

    return 0;
}