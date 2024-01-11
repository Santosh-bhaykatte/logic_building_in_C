//two numbers are written in a file , program to read 
// those numbers and replace them with their sum
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("newTest.txt", "r");

    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("newTest.txt", "w");
    fprintf(fptr, "sum = %d\n", a + b);


    fclose(fptr);
    return 0;
}