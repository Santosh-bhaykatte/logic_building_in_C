// Nested loop
#include<stdio.h>

int main()
{
    for(char i='A'; i<='Z'; i++)
    {
        for(char j='A'; j<='Z'; j++)
        {
                printf("%c\t%c\n", i, j);
        }
    }

    return 0;
}