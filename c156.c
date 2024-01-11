// program to reverse an array using another method and pointer

#include<stdio.h>

void storeArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (arr + i));
    }
}

void reverseArray(int *arr, int n)
{
    for(int i = n-1, j = 0; i >= 0; i--, j++)
    {
        printf("%d index : ", j);
        printf("%d\n", *(arr + i));
    }
}

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    // array
    int arr[n];
     
    storeArray(arr, n);
    printf("\n");
    reverseArray(arr, n);
    
    return 0;
}