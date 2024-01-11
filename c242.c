// fgetc(fptr) & fputc('A', fptr)
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "a");

    fputc(' ', fptr);
    fputc('A', fptr);
    fputc('p', fptr);
    fputc('p', fptr);
    fputc('l', fptr);
    fputc('e', fptr);

    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));

    fclose(fptr);
    return 0;
}