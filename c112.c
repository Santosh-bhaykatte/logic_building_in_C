// Input a string using %c [ character by character ] 
#include<stdio.h>

void inputString(char arr[]);

int main()
{
    char str[100];
    printf("Enter characters : ");

    inputString(str);

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
    printf("\n");
    printf("Your string : %s\n", arr);
}

