// reading from file until End of file - EOF
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r");

    char ch;

    while(ch != EOF)
    {
        ch = fgetc(fptr);
        printf("%c", ch);
    }

    fclose(fptr);
    return 0;
}