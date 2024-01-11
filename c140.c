// display (n^2 + n)  where n = 1, 2, 3, 4...
#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, k;
    printf("Enter value of k : ");
    scanf("%d", &k);

    for(j = 1; j <= k; j++)
    {
        i = pow(j, 2) + j;
        printf("%d\n", i);
    }

    return 0;
}