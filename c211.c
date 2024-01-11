// deleting OR removing an element from array
#include<stdio.h>

int main()
{
    int n, k, count = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    // array
    int arr[n];

    // store
    for(int i=1; i<=n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Enter an index to delete element : ");
    scanf("%d", &k);
    // deleting
    for(int i=k; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n = n - 1;

    // print elements & size
    for(int i=1; i<=n; i++)
    {
        printf("%d index : ", i);
        printf("%d\n", arr[i]);
        count++;
    }
    printf("Size = %d\n", count);

    return 0;
}