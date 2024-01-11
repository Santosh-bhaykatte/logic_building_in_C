// Inserting a character inside a string
#include<stdio.h>
#include<string.h>

void insertChar(char arr[], int m, char ch)
{
    int i, len = strlen(arr);
    // printf(" length = %d", len);

    for(i = len; i >= m; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[m] = ch;
    
    // ===== Another Method ===== //

    // for(i = len - 1; i >= m; i--)
    // {
    //     arr[i + 1] = arr[i];
    // }
    // arr[m] = ch;
    // arr[len + 1] = '\0';
    
    printf("Modified string = %s\n", arr);
}

int main()
{
    char str[50], ch;
    int m;
    printf("Enter a string : ");
    fgets(str, 50, stdin);

    printf("Enter a character to insert : ");
    scanf("%c", &ch);

    printf("Enter an index to insert : ");
    scanf("%d", &m);

    insertChar(str, m, ch);

    return 0;
}
