// -1 , 1, 0, 1, 1, 2, 3, 5, 8, 13..... k 
#include<stdio.h>

int main()
{
    int k, t1, t2, t3, i;
    printf("Enter value of k : ");
    scanf("%d", &k);

    i = -1;
    t1 = -1;
    t2 = 1;

    printf("%d\t%d\t", t1, t2);

    while( i <= k)
    {
         t3 = t1 + t2;
         printf("%d\t", t3);
         t1 = t2;
         t2 = t3;
         i++;
    }

    return 0;
}