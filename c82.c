// program to count no. of odd & even numbers in an array
// using function & array
// 1 is neither composite nor prime number

#include<stdio.h>

void storeNumbers(int arr[], int n);
void countNumbers(int arr[], int n, int number);

int main()
{
    int n, number;
    printf("Enter size of array : ");
    scanf("%d", &n);

    // array
    int numbers[n];

    printf("Enter a number : ");
    scanf("%d", &number);

    storeNumbers(numbers, n);
    printf("\n");
    countNumbers(numbers, n, number);

    return 0;
}

void storeNumbers(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }
}

void countNumbers(int arr[], int n, int num)
{
    int i, countEven, countOdd , countTimes, countPrime, countComposite, prime;

    countEven = countOdd = countTimes = countPrime = countComposite = 0;

    // loop
    for(i=0; i<n; i++)
    {
        prime = 0;
        // even
        if( arr[i] % 2 == 0 )
        {
            countEven++;
        }
        // times
        if(arr[i] % num == 0)
        {
            countTimes++;
        }
        // odd
        if(arr[i] % 2 != 0)
        {
            countOdd++;
        }
        // prime
        for(int j=2; j<arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                prime++;
            }
        }
        if(prime == 0)
        {
            countPrime++;
        }
        else{
            countComposite++;
        }
    }
    printf("Even numbers = %d\n", countEven);
    printf("Odd numbers = %d\n", countOdd);
    printf("Numbers divisible by %d = %d\n", num, countTimes);
    printf("Prime numbers = %d\n", countPrime);
    printf("Composite numbers = %d\n", countComposite);
}
