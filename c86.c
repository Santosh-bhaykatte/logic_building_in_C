// program to store 1 to n numbers in memory using array pointer notation
#include<stdio.h>

void storeNum(int *arr, int n);
void printNum(int *arr, int n);

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    // array
    int numbers[n];

    storeNum(numbers, n);
    printf("\n");
    printNum(numbers, n);

    return 0;
}

void storeNum(int *arr, int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        *(arr + i) = (i + 1);
    }
}

void printNum(int *arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d index : %d\n", i, *(arr + i));
    }
}
