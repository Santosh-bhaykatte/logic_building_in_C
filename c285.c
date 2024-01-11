// program to replace data in file with no. of vowels in string
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r");

    if(fptr == NULL)
    {
        printf("error opening file!\n");
        return 1;
    }

    char ch;
    int count = 0;


    while((ch = fgetc(fptr)) != EOF)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    fclose(fptr);

    fptr = fopen("hello.txt", "a");
    fprintf(fptr, "no of vowels = %d", count);

    fclose(fptr);

    return 0;
}