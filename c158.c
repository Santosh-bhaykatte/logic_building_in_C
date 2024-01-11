//  program to store random numbers in memory using array and print only armstrong numbers from them
// use array pointer (points to first index of array)

#include<stdio.h>
#include<math.h>

void storeArray(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (arr + i));
    }
}

void printArray(int *arr, int n)
{
    int i, t, count, sum;
    for(i = 0; i < n; i++)
    {
        t = *(arr + i);
        // count digits
        count = 0;
        while(t != 0)
        {
            t/=10;
            count++;
        }
        t = *(arr + i);
        // sum
        sum = 0;
        sum = pow((t % 10), count) + 
              pow(((t % 100 - t % 10)/10), count) +
              pow(((t % 1000 - t % 100)/100), count) +
              pow(((t % 10000 - t % 1000)/1000), count);

        // condition
        if(sum == *(arr + i))      
        {
            printf("%d\n", *(arr + i));
        }
    }
}

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int numbers[n];

    storeArray(numbers, n);
    printf("\n");
    printf("Armstrong no. - \n");
    printArray(numbers, n);

    return 0;
}