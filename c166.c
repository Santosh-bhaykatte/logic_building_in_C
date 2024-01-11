// program to print series - n, n*1, n*2, n*3 , n*4   ..... upto mth term using loop 
#include<stdio.h>

int main()
{
    int i, j, m;
    printf("Enter Mth term : ");
    scanf("%d", &m);

    for(i = 2, j = 1; j <= m; i = i * j, j++)
    {
        printf("%d\n", i);
        i = 2;
    }

    return 0;
}