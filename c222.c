// Inserting a character at end of string
#include<stdio.h>
#include<string.h>

void insertChar(char arr[], char ch);

int main()
{
    char str[50], ch;
    printf("Enter String : ");
    fgets(str, 100, stdin);

    printf("Enter a character : ");
    scanf("%c", &ch);

    insertChar(str, ch);

    return 0;
}

void insertChar(char arr[], char ch)
{
    int len = strlen(arr);

    arr[len - 1] = ch;
    
    arr[len] = '\0';
    
    printf("Modified string = %s\n", arr);
}
