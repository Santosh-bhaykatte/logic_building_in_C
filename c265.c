// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop
// 3. second inner loop / print loop 

/*
A A A A A A A A A  
  B B B B B B B B B B B  
    C C C C C C C C C C C C C
      D D D D D D D D D D D D D D D
        E E E E E E E E E E E E E E E E E          
*/

#include<stdio.h>

int main()
{
    int i, j, k, z, n;

    printf("Enter no. of rows : ");
    scanf("%d", &n);

    z = n*2 - 1;
    
    printf("\n");
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
            printf(" %c", i + 64);
        }

        z = z + 2;
        printf("\n");
    }
    printf("\n");

    return 0;
}