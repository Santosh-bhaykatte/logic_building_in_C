// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop starts
// 3. second inner loop / print loop


/*
        1
      3 3 3 
    5 5 5 5 5
  7 7 7 7 7 7 7
9 9 9 9 9 9 9 9 9 

*/

#include<stdio.h>

int main()
{
    int i, n, j, k, z = 1;

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
        for(k = 1; k<=z; k++)
        {
          printf("%d", z);
        }

        z+=2;
        printf("\n");
    }

    return 0;
}