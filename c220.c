// User defined - character handling functions
#include<stdio.h>

void isAlnum(char ch);
void isAlpha(char ch);
void toConvert(char ch); // uppercase to lowercase and vice-versa

int main()
{
    char x;
    printf("Enter a character : ");
    scanf("%c", &x);

    // isAlnum(x);
    // isAlpha(x);
    // toConvert(x);

    return 0;
}

void isAlnum(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    {
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            printf("\n%c is alphabet\n", ch);
        }
        else
        {
             printf("\n%c is digit\n", ch);
        }
        
    }
    else{
        printf("\n%c is neither alphabet nor digit\n", ch);
    }
}
void isAlpha(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("%c is alphabet\n", ch);
    }
    else{
        printf("%c is not alphabet\n", ch);
    }
}

void toConvert(char ch)
{
    if((ch>=97 && ch<=122))
    {
        ch = ch - 32;
    }
    else{
        ch = ch + 32;
    }
    
    printf("Conversion = %c\n", ch);
}