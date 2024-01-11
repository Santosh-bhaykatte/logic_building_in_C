// print alphabet is uppercase or lowercase
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter any alphabet : ");
    scanf("%c", &ch);

    if(isupper(ch))
    {
        printf("%c is uppercase\n", ch);
    }
    if(islower(ch))
    {
        printf("%c is lowercase\n", ch);
    }

    return 0;
}