// gets(str) , fgets(str, n, file), puts(str)
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]; // 100 - maximum no. of characters a string can store
    // It need not necessarily be 100 characters entered
    printf("Enter string : ");
    gets(str);
    puts(str);
    printf("Enter another string : ");
    fgets(str, 100, stdin);
    puts(str);

    return 0;
}