// logical stairs pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop
// 3. second inner loop / print loop 

/*
        E E E E E            
      D D D D  
    C C C  
  B B    
A    

*/

#include<stdio.h>

int main()
{
    int i, j, k, z, n, temp;

    printf("Enter no. of rows : ");
    scanf("%d", &n);

    z = n;

    printf("\n");
    // run loop
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
            printf(" %c", z + 64);
        }

        z--;
        printf("\n");
    }
    printf("\n");

    return 0;
}