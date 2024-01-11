// Store a table of number and fibonacci seq.. using 2D array
#include<stdio.h>

void storeTable(int arr[][10], int m, int n, int num);
void storeFib(int arr[][10], int m, int n);

int main()
{
    int arr[2][10]; // 2D array
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    arr[1][0] = 0;
    arr[1][1] = 1;

    storeTable(arr, 0, 10, n);
    storeFib(arr, 1, 10);

    int i;
    for(i = 0; i<10; i++)
    {
       arr[0][i] = n * (i + 1);
       printf("%d\t", arr[0][i]);
    }

     printf("\n");
     printf("%d\t%d\t", arr[1][0], arr[1][1]);
    for(i = 2; i<10; i++)
    {
        arr[1][i] = arr[1][i-2] + arr[1][i-1];
        printf("%d\t", arr[1][i]);
    } 

    return 0;
}

void storeTable(int arr[][10], int m, int n, int num)
{ 
     int i;
     for(i = 0; i<n; i++)
     {
        arr[m][i] = num * (i + 1);
     }
}

void storeFib(int arr[][10], int m, int n)
{
    int i;
    for(i = 2; i<n; i++)
    {
        arr[m][i] = arr[m][i-2] + arr[m][i-1];
    }
}