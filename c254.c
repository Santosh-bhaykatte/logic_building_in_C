// program to convert all lowercase vowels to uppercase in string
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
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
            {
                arr[i] = arr[i] - 32;
            }
        }
    }
    printf("New string : %s\n", arr);

    return 0;
}