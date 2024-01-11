// Input a string and print it`s length
#include<stdio.h>

int displayLength(char arr[]);

int main()
{
    char str[100];
    printf("Enter a string : ");
    // Input
    fgets(str, 100, stdin);

    printf("Length = %d\n", displayLength(str));

    return 0;
}

int displayLength(char arr[])
{
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}