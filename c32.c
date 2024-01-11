// uppercase and lowercase alphabets (a - z)
#include<stdio.h>

int main()
{
    for(char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c ", ch);
    }
    printf("\n");

    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c ", ch);
    }

    return 0;
}
