// program to find factors of given number 
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    printf("Factors of %d are - ", n);

    for(int i=1; i<=n; i++)
    {
        if( n % i == 0)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}