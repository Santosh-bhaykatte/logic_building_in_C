// storing random numbers in array and printing '0' at odd number and even at even place
#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    // store
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    // print
        for(int j=0; j<n; j++)
        {
            if(arr[j] % 2 == 1)
            {
                arr[j] = 0;
            }
            printf("%d\t", arr[j]);
        }

    return 0;
}
