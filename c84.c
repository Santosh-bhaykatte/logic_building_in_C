// count numbers divisible by 7 in an array 
#include<stdio.h>

void storeNumbers(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (arr + i));
    }
}

int countNum(int *arr, int n)
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(*(arr + i) % 7 == 0)
        {
            printf("%d\n", *(arr + i));
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int numbers[n];

    storeNumbers(numbers, n);
    printf("\n");
    printf("Count : %d", countNum(numbers, n));

    return 0;
}


