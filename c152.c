// program to reverse first and last value in given array
#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int arr[n];

    // input
    printf("Enter Values : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;
    temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;

    printf("\n");

    // Output
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}