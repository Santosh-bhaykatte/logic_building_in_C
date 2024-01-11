// print slice / substring of a string
#include<stdio.h>

void subString(char arr[], int m, int n);

int main()
{
    char oldStr[100];
    int s, e;
    printf("Enter your string : ");
    fgets(oldStr, 100, stdin);
    printf("Enter start index : ");
    scanf("%d", &s);
    printf("Enter end index : ");
    scanf("%d", &e);

    subString(oldStr, s, e);

    return 0;
}

void subString(char arr[], int m, int n)
{
    int i, j;
    char newStr[100];
    // loop
    for(i = m, j = 0; i <= n; i++, j++)
    {
        newStr[j] = arr[i];
    }
    newStr[j] = '\0';
    printf("Substring = %s", newStr);
}