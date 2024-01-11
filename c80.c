// Arrays as function arguments - using pointer notation
#include<stdio.h>

void storeNumbers(int * , int);
void printNumbers(int * , int);

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int numbers[n]; // array

    storeNumbers(numbers, n);
    printf("\n");
    printNumbers(numbers, n);

    return 0;
}

void storeNumbers(int *arr, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (arr + i));
    }
}

void printNumbers(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] % 7 != 0)
        {
            continue;
        }
        printf("%d index : %d\n", i, arr[i]);
    }
}
