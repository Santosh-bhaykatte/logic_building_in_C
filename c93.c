/* the standard library file <ctype.h> is used for character handling function - isalnum() ,isalpha(), isdigit(), isupper(), islower() , toupper(), tolower() */

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);

    if(!isalnum(ch))
    {
       printf("It is neither letter nor digit \n"); 
    }
    if(isalpha(ch))
    {
        printf("It is a letter\n");
    }
    if(isdigit(ch))
    {
        printf("It is a digit\n");
    }

    return 0;
}