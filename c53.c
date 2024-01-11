// Function program
#include<stdio.h>

void printNamaste()
{
    printf("Namaste\n");
}
void printBonjour()
{
    printf("Bonjour\n");
}

int main()
{
    char ch;
    printf("Enter 'i' for indian and 'f' for french : ");
    scanf("%c", &ch);

    if(ch == 'i')
    {
        printNamaste();
    }
    else if(ch == 'f')
    {
        printBonjour();
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}