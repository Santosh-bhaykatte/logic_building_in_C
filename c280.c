// logical pyramid pattern

// 1. outer loop / run loop - no. rows
// 2. first inner loop / space loop 
// 3. second inner loop / print loop 


/*

  * * * * * * *  
    * * * * * 
      * * *
       * * 
        *
*/

#include<stdio.h>

int main()
{
    int i, j, k, n, z;
    printf("Enter no. rows : ");
    scanf("%d", &n);

    z = n;
    
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
        for(k = 1; k<=z; k++)
        {
            printf(" ^");
        }

        z--;
        printf("\n");
    }
    printf("\n");
     
    return 0;
}