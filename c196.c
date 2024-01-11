// program to display a pattern ======= Important =======

/*
    
    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5

*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    int x, y, z;
    printf("Enter a number : ");
    scanf("%d", &x);

    z = y = x;

    for(int i=1; i<=x; i++)
    {
        for(int j=z; j<=y; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        z--;
    }

    return 0;
}