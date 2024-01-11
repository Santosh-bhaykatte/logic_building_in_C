 // display 2, 5, 10, 17, 26, .....
#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, k;
    printf("Enter value of k : ");
    scanf("%d", &k);

    for(j=1; j<=k; j++)
    {
        i = (int)pow(j, 2) + 1;
        printf("%d\n", i);
    }

    return 0;
}