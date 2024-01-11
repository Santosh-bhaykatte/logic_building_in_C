// uppercase to lowercase and vice-versa
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter any alphabet : ");
    fflush(stdin); // clears input stream
    scanf("%c", &ch);

    if(isupper(ch))
    {
        ch = tolower(ch);
    }
    else{
        ch = toupper(ch);
    }
    printf("%c\n", ch);

    return 0;
}