// ======= I Succeed to program it after multiple attempts ======= //
// ========  A positive approach ========= // 

// program using pointers to return multiple values

// add 1 point for each even number in an array
// add 3 point for each odd number in an array
// add 5 point for every time you encounter 5 in an array
#include<stdio.h>

void printAll(int arr[], int n, int *add1, int *add2, int *add3);

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    // array
    int arr[n], add1, add2, add3;
    int *ptr = arr;
    
    // store elements
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (ptr + i));
    }

    // Function calls
    printAll(arr, n, &add1, &add2, &add3);

    printf("Add1 = %d\nAdd2 = %d\nAdd3 = %d\n", add1, add2, add3);

    return 0;
}

void printAll(int arr[], int n, int *add1, int *add2, int *add3)
{
    int i;
    *add1 = *add2 = *add3 = 0;
    
    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            *add1 = *add1 + 1;
        }
    }
    
    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            *add2 = *add2 + 3;
        }
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] == 5)
        {
            *add3 = *add3 + 5;
        }
    }

    return 0;
}

