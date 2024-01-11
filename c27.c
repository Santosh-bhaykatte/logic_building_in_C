// uppercase and lowercase alphabet
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);

    if( ch>='A' && ch <= 'Z')
    {
        printf("%c is a Uppercase", ch);
    }
    else{
        printf("%c is a Lowercase", ch);
    }

    return 0;
}
