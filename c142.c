 // display 1, 6, 15, 28, 45, ....
#include<stdio.h>

int main()
{
    int i, j, k;
    printf("Enter value of K : ");
    scanf("%d", &k);

    for(i = 1, j = 5; i<=k; j = j + 4)
    {
        printf("%d\n", i);
        i = i + j;
    }

    return 0;
}