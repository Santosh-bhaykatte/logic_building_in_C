// program to convert all uppercase vowels to lowercase in string
#include<stdio.h>
#include<ctype.h>

int main()
{
    char arr[50];
    printf("Enter a string : ");
    fgets(arr, 50, stdin);

    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(isupper(arr[i]))
        {
            if(arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
            {
                arr[i] = arr[i] + 32;
            }
        }
    }
    printf("New string : %s\n", arr);

    return 0;
}