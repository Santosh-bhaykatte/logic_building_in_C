// program to diplay pattern
/*

   5 5 5 5 5
   4 4 4 4
   3 3 3
   2 2
   1

*/

#include<stdio.h>

int main()
{
    int x, i, j;
    printf("Enter a number : ");
    scanf("%d", &x);

    for(i=x; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}