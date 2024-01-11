  // while loop
#include<stdio.h>

int main()
{
    int i = 1;
    while(i<=5)
    {
        printf("%d\n", i);
        i++;
    }
    printf("\n%d", --i);
    printf("\n%d", ++i);

    return 0;
}
