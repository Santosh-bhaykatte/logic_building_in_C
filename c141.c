// display (n^3 - n^2)  where n = 1, 2,....
#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, k;
    printf("Enter value of K : ");
    scanf("%d", &k);

    for(j=1; j<=k; j++)
    {
        i = pow(j, 3) - pow(j, 2);
        printf("%d\n", i);
    }

    return 0;
}