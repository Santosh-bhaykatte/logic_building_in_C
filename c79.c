/*  =========== IMPORTANT ===========  */

// Passing arrays as function arguments - using Array notation
// Call by address

#include<stdio.h>

void printNumbers(int arr[], int n);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    
    printNumbers(numbers, 10);
    
    return 0;
}

void printNumbers(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
