// Display squares of 1 ... 10
#include<stdio.h>

int main()
{
    int k;
    printf("Enter a number : ");
    scanf("%d", &k);
    int i , j;
    for(i = 1, j =3; i<=k; j = j + 2)
    {
        printf("%d\n", i);
        i = i + j;
    }

    return 0;
}