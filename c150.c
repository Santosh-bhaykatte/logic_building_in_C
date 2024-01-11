 // program to store random numbers in memory using array and print prime numbers of them

 #include<stdio.h>

void storeArray(int arr[], int n);
void printPrime(int arr[], int n);

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int arr[n]; // integer array

    storeArray(arr, n);
    printf("\n");
    printf("Prime numbers : ");
    printPrime(arr, n);


    return 0;
}

void storeArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &arr[i]);
    }
}

void printPrime(int arr[], int n)
{
    int prime;
    for(int j=0; j<n; j++)
    {
        prime = 1;

        for(int b=2; b < arr[j]; b++) // Imp
        {
            if(arr[j] % b == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
        {
            if(arr[j] == 1)
            {
                continue;
            }
            printf("%d\t", arr[j]);
        }
    }
}
