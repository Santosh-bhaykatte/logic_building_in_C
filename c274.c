// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop
// 3. second inner loop / print loop 

/*

            *           
          *    
        *    
      *      
    *     
    
*/

#include<stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter no. rows : ");
    scanf("%d", &n);

    //outer loop
    for(i = 1; i<=n; i++)
    {
        //space loop
        for(j = n-1; j>=i; j--)
        {
            printf(" ");
        }

        // print loop
        for(k = 1; k<=1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}