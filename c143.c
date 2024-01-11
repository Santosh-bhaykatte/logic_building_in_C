// display 2, 5, 11, 23, 47....
#include<stdio.h>

int main()
{
    int i, j, k;
    printf("Enter value of K : ");
    scanf("%d", &k);

    for(i=2 , j=3; i<=k; j = j * 2)
    {
        printf("%d\n", i);
        i = i + j;
    }

    return 0;
}