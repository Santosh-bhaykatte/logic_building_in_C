// program to store random numbers in array and find whether key pressed by user is found or not
#include<stdio.h>

int main()
{
    int n, key;
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
    printf("\n");
    printf("press a key : ");
    scanf("%d", &key);

    for(int i=0; i<n; i++)
    {
        if( *(ptr + i) == key)
        {
            printf("Key is found\n");
            return 0;
        }
    }
    printf("Key is not found\n");
        
    return 0;
}
