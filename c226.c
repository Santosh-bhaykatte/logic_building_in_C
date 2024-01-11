// program to insert two characters at random position in string { Tried } 
// Many attempts
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insertChar(char arr[], char chF, char chS);

int main()
{
    char str[50];
    char chF, chS;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

   //  str[strcspn(str, "\n")] = 0;

    printf("Enter first char to insert : ");
    scanf("%c", &chF);

    fflush(stdin);

    printf("Enter second char to insert : ");
    scanf("%c", &chS);
    
    insertChar(str, chF, chS);
    printf("%s\n", str);

    return 0;
}

void insertChar(char arr[] , char chF, char chS)
{
     int pos1, pos2;
     int n = strlen(arr);
    
     // Inserting first char 
      
     printf("Enter first position to insert : ");
     scanf("%d", &pos2);

     for(int i = n; i >= pos2; i--)
     {
        arr[i + 1] = arr[i];
     }
     arr[pos2 - 1] = chF;
     n++;

     // Inserting 2nd char

     printf("Enter second position to insert : ");
     scanf("%d", &pos1);

     for(int i = n; i >= pos1; i--)
     {
        arr[i + 1] = arr[i];
     }
     arr[pos1 - 1] = chS;
     arr[n] = '\0';
}