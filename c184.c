// program to generate all combinations of 1, 2, 3.. (Nested loop)
// 111 , 112, 113...........331, 332, 333
#include<stdio.h>

int main()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            for(int k=1; k<=3; k++)
            {
                printf("%d%d%d\n", i, j, k);
            }
        }
    }

    return 0;
}