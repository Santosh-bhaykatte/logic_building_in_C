// Inserting two elements at the end of an array
// 1 based indexing

#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("enter size of array : ");
    scanf("%d", &n);
    
    // array 
    int arr[n];

    // store
    for(int i=1; i<=n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter elements to insert - \n");

    // Inserting
    for(int i = n; i <= n+1; i++)
    {
        scanf("%d", &arr[i+1]);
    }

    n = n + 2;

    printf("\n");

    // print elements & size
    for(int i=1; i<=n; i++)
    {
        printf("%d index : ", i);
        printf("%d\n", arr[i]);
        count++;
    }
    printf("Size = %d\n", count);
   
    return 0;
}
