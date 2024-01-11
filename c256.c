// program to replace all lowercase letters to uppercase and vice-versa
#include<stdio.h>
#include<ctype.h>

int main()
{
    char arr[50];
    printf("Enter a string : ");
    fgets(arr, 50, stdin);

    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(islower(arr[i]))
        {
            arr[i] = arr[i] - 32;
        }
        else if(isupper(arr[i]))
        {
            arr[i] = arr[i] + 32;
        }
    }
    printf("New string : %s\n", arr);

    return 0;
}