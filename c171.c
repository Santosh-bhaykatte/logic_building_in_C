// program 
// add 1 point for each even number in an array
// add 3 point for each odd number in an array
// add 5 point for every time you encounter 5 in an array

#include<stdio.h>

int printFeven(int arr[], int n);
int printFodd(int arr[], int n);
int printFtimes(int arr[], int n);

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    // store
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }
    // function call
    printf("Add1 = %d\n", printFeven(arr, n));
    printf("Add2 = %d\n", printFodd(arr, n));
    printf("Add3 = %d\n", printFtimes(arr, n));

    return 0;
}

int printFeven(int arr[], int n)
{
    int add1 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            add1 = add1 + 1;
        }
    }
    return add1;
}

int printFodd(int arr[], int n)
{
    int add2 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            add2 = add2 + 3;
        }
    }
    return add2;
}

int printFtimes(int arr[], int n)
{
    int add3 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 5)
        {
            add3 = add3 + 5;
        }
    }
    return add3;
}