// File handling in C 
// File i/o - file read/write

// file modes - "r" "rb" "w" "wb" "a"
// "w" and "wb" file mode creates file if it does not exists
// "r" and "rb" modes returns null to file pointer if file does not exists

#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r");

    // reading from file
    char ch[100];
    fscanf(fptr, "%s", ch);
    printf("\ncharacter = %s\n", ch);

    fscanf(fptr, "%s", ch);
    printf("character = %s\n", ch);

    fscanf(fptr, "%s", ch);
    printf("character = %s\n", ch);

    fscanf(fptr, "%s", ch);
    printf("character = %s\n", ch);

    fscanf(fptr, "%s", ch);
    printf("character = %s\n\n", ch);
    
    fclose(fptr);
    return 0;
}