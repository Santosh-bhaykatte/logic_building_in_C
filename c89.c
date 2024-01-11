// storing tables of two numbers in memory using 2D array
// arr[][] = [rows][cols] 2 dimensions 
#include<stdio.h>

void storeTable(int arr[][10], int m, int n, int num);

int main()
{
    int n1, n2;
    int tables[2][10]; // 2D array

    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);

    storeTable(tables, 0, 10, n1);
    storeTable(tables, 1, 10, n2);

    // print Table 1
    for(int i=0; i<10; i++)
    {
        printf("%d * %d = %d\n", n1, (i+1), n1 * (i+1));
    }
    printf("\n");
    // print Table 2
    for(int i=0; i<10; i++)
    {
        printf("%d * %d = %d\n", n2, (i+1), n2 * (i+1));
    }

    return 0;
}

void storeTable(int arr[][10], int m, int n, int num)
{
    int i;
    for(i=0; i<n; i++)
    {
        arr[m][i] = num * (i + 1);
    }
}
