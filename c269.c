// logical stairs pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop
// 3. second inner loop / print loop

/*
        E E E E E E E E E E E E E E E E E
      D D D D D D D D D D D D D D D
    C C C C C C C C C C C C C
  B B B B B B B B B B B
A A A A A A A A A
*/

#include <stdio.h>

int main()
{
  int i, j, k, z, n, temp;

  printf("Enter no. of rows : ");
  scanf("%d", &n);

  z = n * 3 + 2;
  temp = n;

  printf("\n");
  // run loop
  for (i = 1; i <= n; i++)
  {
    // space loop
    for (j = n - 1; j >= i; j--)
    {
      printf(" ");
    }

    // print loop
    for (k = 1; k <= z; k++)
    {
      printf(" %c", temp + 64);
    }

    z = z - 2;
    temp--;
    printf("\n");
  }

  printf("\n");

  return 0;
}