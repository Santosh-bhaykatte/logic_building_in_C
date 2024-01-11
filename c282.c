// program to remove blank spaces from a string
#include<stdio.h>
#include<string.h>

int main()
{  
    char str[50];
    printf("Enter a string : ");
    fgets(str, 50, stdin);

    int i, j, len;

    len = strlen(str);
    printf("Length = %d\n", len);

    for(i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            for(j = i; j<len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
        }
    }

    printf("new string = %s", str);
    printf("new length = %d\n", len);

    return 0;
}