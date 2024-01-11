// print alphabet is uppercase or lowercase using ASCII values - a-z (97 - 122) and A - Z (65 - 90)
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter any alphabet : ");
    fflush(stdin);
    scanf("%c", &ch);

    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        if(ch>=65 && ch<=90)
        {
            printf("%c is uppercase", ch);
        }
        else{
            printf("%c is lowercase", ch);
        }
    }

    return 0;
}