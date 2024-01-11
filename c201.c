// program to display pattern

/*

15 14 13 12 11
10 9 8 7 
6 5 4
3 2
1

*/

#include<stdio.h>

int main()
{
    int x, i, j, k;
    printf("Enter a number : ");
    scanf("%d", &x);
    
    k = 15;

    for(i=x; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", k--);
        }
        printf("\n");
    }

    return 0;
}