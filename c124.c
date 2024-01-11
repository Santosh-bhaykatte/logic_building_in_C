// display 1, 2, 4, 7, 11, ...k
// 1+ , 2+ , 3+ ... logic sequence
#include<stdio.h>

int main()
{
    int k;
    printf("Enter a number : ");
    scanf("%d", &k);
    
    for(int i = 1, j = 1; i <= k; j++)
    {
        printf("%d\n", i);
        i = i + j ; 
    }

    return 0;
}