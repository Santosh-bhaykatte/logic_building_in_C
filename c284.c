// program to print all letters in english alphabet using pointer
#include<stdio.h>

int main()
{
    int ch;
    int *ptr = &ch;

    for(*ptr = 65; *ptr <= 122; (*ptr)++)
    {
        if(*ptr > 90 && *ptr < 97)
        {
            continue;
        }
        printf("%c\n", *ptr);
    }

    return 0;
}