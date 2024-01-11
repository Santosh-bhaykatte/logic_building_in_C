// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop
// 3. second inner loop / print loop 

/*
        A
      B B B 
    C C C C C
  D D D D D D D
E E E E E E E E E

*/

#include<stdio.h>

int main()
{
    int i, j, k, z = 1, n;

    printf("Enter no. of rows : ");
    scanf("%d", &n);

    // run loop
    for(i = 0; i<n; i++)
    {
        // space loop
        for(j = n-1; j>=i; j--)
        {
            printf(" ");
        }

        // print loop
        for(k = 1; k<=z; k++)
        {
            printf("%c", i+65);
        }

        z = z + 2;
        printf("\n");
    }

    return 0;
}