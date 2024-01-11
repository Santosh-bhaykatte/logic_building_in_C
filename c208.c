// Inserting two elements consecutively in an array
#include<stdio.h>

int main()
{
    int n, k1, k2, count = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    // array
    int arr[n];
    
    // store
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter 1st index to insert element : ");
    scanf("%d", &k1);
    printf("Enter 2nd index to insert element : ");
    scanf("%d", &k2);

    // Inserting elements

    for(int i = n-1; i >= k1; i--)
    {
        arr[i+2] = arr[i];
    }
    printf("Enter 1st element to insert : ");
    scanf("%d", &arr[k1]);
    printf("Enter 2nd element to insert : ");
    scanf("%d", &arr[k2]);
    n = n + 2;

    //print elements & Size
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        printf("%d\n", arr[i]);
        count++;
    }
    printf("Size = %d\n", count);

    return 0;
}