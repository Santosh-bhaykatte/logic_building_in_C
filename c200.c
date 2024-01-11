// program to display pattern

/*

 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15

*/

#include<stdio.h>

int main()
{
    int x, i, j, k=1;
    printf("Enter a number : ");
    scanf("%d", &x);

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }

    return 0;
}