// largest & smallest number in an array of size 'n' 
// using pointer to array
#include<stdio.h>

void storeArray(int *arr, int n);
void doWork(int *arr, int n, int *, int *);

int main()
{
    int n, largest, smallest;
    printf("Enter array size : ");
    scanf("%d", &n);
    // array
    int numbers[n];
    
    storeArray(numbers, n);
    doWork(numbers, n, &largest, &smallest);

    printf("Largest = %d\nSmallest = %d\n", largest, smallest);

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

void doWork(int *arr, int n, int *largest, int *smallest)
{

    *largest = *smallest = arr[0];

    for(int i=0; i<n; i++)
    {
        if(*(arr + i) > *largest)
        {
            *largest = *(arr + i);
        }
        if(*(arr + i) < *smallest)
        {
            *smallest = *(arr + i);
        }
    }

}