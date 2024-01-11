// program to display a pattern ======= Important =======

/*
    
    1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5
    5

*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    int x, y, z;
    printf("Enter a number : ");
    scanf("%d", &x);

    y = x;
    z = 1;

    for(int i=1; i<=x; i++)
    {
        for(int j=z; j<=y; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        z++;
    }

    return 0;
}