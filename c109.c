// Input a string and print how many times a character occurs
#include<stdio.h>

int displayTimes(char arr[], char ch);

int main()
{
    char str[100], ch;
    printf("Enter a string : ");
    fgets(str, 100, stdin);
    printf("Enter char to count : ");
    scanf("%c", &ch);

    printf("Count = %d\n" , displayTimes(str, ch));

    return 0;
}

int displayTimes(char arr[], char ch)
{
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++)
    {
        if(arr[i] == ch)
        {
            count++;
        }
    }
    return count;
}