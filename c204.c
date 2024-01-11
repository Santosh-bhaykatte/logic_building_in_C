// program to insert a password inside string
// string - santoshbhay
// password - @12gmail.com
// output - santosh@12gmail.combhay

#include<stdio.h>

void insertPass(char arr[], char pass[], int m);

int main()
{
    char str[100];
    printf("Enter your string : ");
    fgets(str, 100, stdin);

    char pass[100] = "@7397$g,ail.com";

    int m;
    printf("Enter an index : ");
    scanf("%d", &m);

    insertPass(str, pass, m);
    puts(str);

    return 0;
}

void insertPass(char arr[], char pass[], int m)
{
    int i, j;
    char newStr[100];
    
    // copying string from 'm' index in temporary string
    for(i=m, j=0; arr[i] != '\0'; i++, j++)
    {
        newStr[j] = arr[i];
    }
    newStr[j] = '\0';

    // concatnating password with original string from 'm'th index
    for(i=m, j=0; pass[j] != '\0'; i++, j++)
    {
        arr[i] = pass[j];
    }
    arr[i] = '\0';

    // concatnating temporary string with new string formed after concatenating password
    for(j=0; newStr[j] != '\0'; j++, i++)
    {
        arr[i] = newStr[j];
    }
    arr[i] = '\0';
    
}
