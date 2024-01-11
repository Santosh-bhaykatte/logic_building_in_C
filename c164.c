// program to print largest & smallest among numbers in an array
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
        scanf("%d", (ptr + i));
    }
    int largest , smallest;

    largest =  *(ptr + 0);
    smallest = *(ptr + 0);

    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        else if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Largest is %d\tSmallest is %d\n", largest, smallest);

    return 0;
}
