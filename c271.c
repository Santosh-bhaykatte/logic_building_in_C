// logical stairs pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop
// 3. second inner loop / print loop 

/*
A    
  B B    
    C C C  
      D D D D  
        E E E E E            

*/

#include<stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter no. of rows : ");
    scanf("%d", &n);

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
        for(k = 1; k<=i; k++)
        {
            printf(" %c", i + 64);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}