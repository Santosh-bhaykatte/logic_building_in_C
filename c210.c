// Inserting an element at end of array by copying method
#include<stdio.h>

int main()
{
    int n, count=0;
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

    // Insert
    for(int i=n-1; i>=n-1; i--)
    {
        arr[i+1] = arr[i];
    }
    printf("Enter an element to insert : ");
    scanf("%d", &arr[n-1]);
    n = n + 1;

    int temp = arr[n-1];
    arr[n-1] = arr[n-2];
    arr[n-2] = temp;

    // print size and elements
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        printf("%d\n", arr[i]);
        count++;
    }
    printf("Size = %d\n", count);

    return 0;
}