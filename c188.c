/* program to display following pattern   == == Important == == 
   
   A B C D E F 
   A B C D E
   A B C D 
   A B C
   A B
   A

 */

#include<stdio.h>
#include<ctype.h>

int main()
{
    char x, y;
    printf("Enter a charcter : ");
    scanf("%c", &x);
    y = x = toupper(x);

    for(char i='A'; i<=x; i++)
    {
        for(char ch='A'; ch<=y; ch++)
        {
            printf("%c ", ch);
        }
        printf("\n");
        y--;
    }

    return 0;
}