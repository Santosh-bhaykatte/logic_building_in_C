// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop
// 3. second inner loop / print loop 

/*
I I I I I I I I I  
  G G G G G G G   
    E E E E E 
      C C C 
        A           
*/

#include<stdio.h>

int main()
{
    int i, j, k, z, n;

    printf("Enter no. of rows : ");
    scanf("%d", &n);

    z = n*2 - 1;

    // run loop
    for(i = 1; i<=n; i++)
    {
        // space loop
        for(j = i; j>1; j--)
        {
            printf(" ");
        }

        // print loop
        for(k = 1; k<=z; k++)
        {
            printf("%c", z + 64);
        }

        z = z - 2;
        printf("\n");
    }

    return 0;
}