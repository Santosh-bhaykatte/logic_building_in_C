// logical
#include<stdio.h>

int main()
{
    int i , sum = 0, n1, n2;
    printf("Enter num 1 : ");
    scanf("%d", &n1);
    printf("Enter num 2 : ");
    scanf("%d", &n2);

    for(i = n1; i<=n2; i++)
    {
        sum = ( (i % 10000 - i % 1000)/1000 + (i % 1000 - i % 100)/100 + (i % 100 - i % 10)/10 + (i % 10));
        
        printf("\n%d + %d + %d + %d = %d\n", (i % 10000 - i % 1000)/1000, (i % 1000 - i % 100)/100, (i % 100 - i % 10)/10, (i % 10), sum);
    }

    return 0;
}
