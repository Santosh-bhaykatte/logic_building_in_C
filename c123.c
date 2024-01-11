// display 1, 2, 4, 8, .... k
#include<stdio.h>

int main()
{
    int k;
    printf("Enter a number : ");
    scanf("%d", &k);

    for(int i=1; i<=k; i = i * 2)
    {
        printf("%d\n", i);
    }


    return 0;
}