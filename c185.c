// program to display all characters and their ASCII Values
#include<stdio.h>

int main()
{
    unsigned char ch;

    ch = 0;

    while(ch<255)
    {
        printf("%c = %d\n", ch, ch);
        ch = ch + 1; // ch++
    }
    printf("%c = %d\n", ch, ch);

    return 0;
}