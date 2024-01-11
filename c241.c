// File handling in C 
// File i/o - file read/write

// file modes - "r" "rb" "w" "wb" "a"
// "w" and "wb" file mode creates file if it does not exists & overwrites file
// "r" and "rb" modes returns null to file pointer if file does not exists
// using "a" - file will not be overwritten 

#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "a");

    // Writing to a file
    char name[] = "santosh";
    int age = 20;
    fprintf(fptr, "%s\t", name);

    fclose(fptr);
    return 0;
}