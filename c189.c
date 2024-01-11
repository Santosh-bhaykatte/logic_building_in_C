/* program to display following pattern   == == Important == == 
   
   A
   A B
   A B C
   A B C D
   A B C D E
   A B C D E F

 */

#include<stdio.h>
#include<ctype.h>

int main()
{
    char x, y;
    printf("Enter a charcter : ");
    scanf("%c", &x);
    x = toupper(x);
    
    y = 'A';

    for(char i='A'; i<=x; i++)
    {
        for(char ch='A'; ch<=y; ch++)
        {
            printf("%c ", ch);
        }
        printf("\n");
        y++;
    }

    return 0;
}