/* program to display following pattern   == == Important == == 
   
   F
   F E 
   F E D
   F E D C
   F E D C B
   F E D C B A

 */

#include<stdio.h>
#include<ctype.h>

int main()
{
    char x, y;
    printf("Enter a character : ");
    scanf("%c", &x);
    x = toupper(x);

    y = x;
    for(char i=x; i>='A'; i--)
    {
        for(char ch=x; ch>=y; ch--)
        {
            printf("%c ", ch);
        }
        printf("\n");
        y--;
    }

    return 0;
}

