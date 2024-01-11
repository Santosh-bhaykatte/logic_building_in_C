// Character - uppercase/lowercase vowel, consonant, digit
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is Uppercase Vowel", ch);
    }

    else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        printf("%c is Lowercase Vowel", ch);
    }

     else if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
     {
         printf("%c is a digit", ch);
     }
    else
    {
        printf("%c is Consonant",ch);
    }

    return 0;
}
