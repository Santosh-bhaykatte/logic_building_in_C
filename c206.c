// Inserting an element in an array
#include<stdio.h>

int main()
{
    int n, k, x, count = 0;
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

    printf("Enter index to insert element : ");
    scanf("%d", &k);
    printf("Enter element to insert : ");
    scanf("%d", &x);

    // Inserting an element
    for(int i = n-1; i>=k; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[k] = x;
    n = n + 1;

    //print elements
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        printf("%d\n", arr[i]);
        count++;
    }
    printf("Size = %d\n", count);

    return 0;
}