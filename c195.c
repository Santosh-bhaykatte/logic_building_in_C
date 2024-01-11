// program to display a pattern ======= Important =======

/*
    
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    int x, y;
    printf("Enter a number : ");
    scanf("%d", &x);
    
    y = x;
    for(int i=x; i>=1; i--)
    {
        for(int j=1; j<=y; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        y--;
    }

    return 0;
}