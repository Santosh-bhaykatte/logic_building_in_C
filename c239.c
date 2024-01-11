// File handling in C 
// File i/o - file read/write
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    // fopen() returns NULL to fptr if file does not exist

    if(fptr == NULL)
    {
        printf("File doesn`t exist\n");
    }
    else{
        printf("file exist\n");
        fclose(fptr);
    }

    return 0;
}