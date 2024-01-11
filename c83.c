// count no. of even numbers in an array
#include<stdio.h>

int countEven(int *arr, int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int numbers[n];
    
    for(int i=0; i<n; i++)
    {
         numbers[i] = i; 
    }

    printf("Count = %d", countEven(numbers, n));
    return 0;
}

int countEven(int *arr, int n)
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(*(arr + i) % 2 == 0)
        {
            count++;
            printf("%d\n", arr[i]);
        }
    }
    return count;
}

