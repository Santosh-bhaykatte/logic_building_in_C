// program to check whether a string is palindrome or not 

#include<stdio.h>
#include<string.h>

void reverseStr(char arr[]);

int main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str, 50, stdin);

    // Important
    int n = strlen(str);
    if(str[n-1] == '\n')
    {
        str[n-1] = '\0';
    }

    char newStr[50];
    strcpy(newStr, str);

    reverseStr(str);

    if ( strcmp(str, newStr) == 0 ) 
    {
        printf("%s is a palindrome\n", newStr);
    } 
    else {
        printf("%s is not a palindrome\n", newStr);
    }

    return 0;
}

void reverseStr(char arr[])
{
    char firstVal, secVal;

    int n = strlen(arr);

    for(int i = 0; i < n/2; i++)    // Imp
    {
        firstVal = arr[i];
        secVal = arr[n - i - 1];
        arr[i] = secVal;
        arr[n - i - 1] = firstVal;
    }

    printf("Reversed string : ");
    puts(arr);

}

