// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop starts
// 3. second inner loop / print loop


/*
        1
      3 2 1 
    5 4 3 2 1
  7 6 5 4 3 2 1
9 8 7 6 5 4 3 2 1 

*/

#include<stdio.h>

int main()
{
    int i, j, k, n, z = 1;

    printf("Enter no. rows : ");
    scanf("%d", &n);

    // outer loop
    for(i = 1; i<=n; i++)
    {
      // space loop
      for(j = n-1; j>=i; j--)
      {
        printf(" ");
      }

      // print loop
      for(k = z; k>=1; k--)
      {
        printf("%d", k);
      }
      
      z = z + 2;
      printf("\n");

    }

    return 0;
}