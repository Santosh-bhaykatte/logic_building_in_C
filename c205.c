// program to check whether entered key is found or not 
#include<stdio.h>

void check(int arr[], int n, int k);

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    // store
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter a key : ");
    scanf("%d", &k);

    check(arr, n, k);

    return 0;
}

void check(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)   
    {
        if(arr[i] == k)
        {
            printf("key is found\n");
            return;
        }
    }
    printf("Key is not found\n");
}