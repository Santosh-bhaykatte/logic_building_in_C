// Inserting two elements randomly in an array ( Succeed )
#include<stdio.h>

int main()
{
    int n, pos1, pos2, count = 0, val1, val2;
    // array
    int arr[100] = {0}; // array with 100 elements initialized to zero
    n = 0; // Intial size of an array
    printf("Enter size of array : ");
    scanf("%d", &n);
    
    // store
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter first pos to insert element : ");
    scanf("%d", &pos2);
    printf("Enter 1st element to insert : ");
    scanf("%d", &val1);
    printf("Enter 2nd pos to insert element : ");
    scanf("%d", &pos1);
    printf("Enter 2nd element to insert : ");
    scanf("%d", &val2);

    // Inserting first element
    for(int i = n; i >= pos2; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos2 - 1] = val1;
    n = n + 1;

    // Inserting second element
    for(int i = n; i >= pos1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos1 - 1] = val2;
    n = n + 1;

    //print elements & size
    for(int i=0; i < n; i++)
    {
        printf("%d index : ", i);
        printf("%d\n", arr[i]);
        count++;
    }
    printf("Size = %d\n", count);

    return 0;
}