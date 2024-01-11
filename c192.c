// program to display a pattern ======= Important =======

/*
    
    5 4 3 2 1
    5 4 3 2 
    5 4 3 
    5 4 
    5 

*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    int x, y;
    printf("Enter a number : ");
    scanf("%d", &x);
    
    y = 1;
    for(int i=x; i>=1; i--)
    {
        for(int j=x; j>=y; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
        y++;
    }

    return 0;
}