// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop 
// 3. second inner loop / print loop 


/*

        1
       1 2 
      1 2 3
    1 2 3 4 5 
  1 2 3 4 5 6 7  

*/

#include<stdio.h>

int main()
{
    int i, j, k, n;
    printf("Enter no. rows : ");
    scanf("%d", &n);
    
    printf("\n");

    //outer loop
    for(i = 1; i<=n; i++)
    {
        //space loop
        for(j = n-1; j>=i; j--)
        {
            printf(" ");
        }
        
        //print loop
        for(k = 1; k<=i; k++)
        {
            printf(" %d", k);
        }

        printf("\n");
    }
    printf("\n");

    return 0;
}