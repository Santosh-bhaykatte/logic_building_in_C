// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop
// 3. second inner loop / print loop 

/*
        0
      1 0 1 
    2 1 0 1 2
  3 2 1 0 1 2 3

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i, j, k, n, z = 1;

  printf("Enter no. of rows : ");
  scanf("%d", &n);

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
      printf("%d", abs(k-i)); // abs() function
    }

    z = z + 2;
    printf("\n");
  }
    
    return 0;
}