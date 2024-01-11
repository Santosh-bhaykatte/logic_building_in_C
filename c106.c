// Input & Print string using characters
#include<stdio.h>

void inputString(char arr[]);
void printString(char arr[]);

int main()
{
    char str[100]; // char array - string
    printf("Enter a string : ");

    inputString(str);
    printf("\n");
    printString(str);

    return 0;
}

void inputString(char arr[])
{
    int i = 0;
    char ch;

    while(ch != '\n')
    {
        scanf("%c", &ch);
        arr[i] = ch;
        i++;
    }
    arr[i] = '\0';
}

void printString(char arr[])
{
    int i;
    for(i=0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
}
