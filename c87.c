// program to reverse an array
// standard method (n-i-1) - i is index
// travel upto n/2

#include<stdio.h>

void storeArray(int *arr, int n);
void reverseArray(int *arr, int n);
void printArray(int *arr, int n);

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    // array
    int numbers[n];

    storeArray(numbers, n);
    printf("\n");
    reverseArray(numbers, n);
    printf("\n");
    printArray(numbers, n);

    return 0;
}

void storeArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (arr + i));
    }
}

// ========== STANDARD METHOD ========== //

void reverseArray(int *arr, int n)
{
    int firstVal, secVal, i;
    for(i=0; i<=n/2; i++)
    {
        firstVal = *(arr + i);
        secVal = arr[n-i-1];
        *(arr + i) = secVal;
        arr[n-i-1] = firstVal;
    }
}

void printArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d index : %d\n", i, *(arr + i));
    }
}