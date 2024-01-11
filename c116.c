// check whether a given character present in string or not
#include<stdio.h>

void check(char arr[], char ch);

int main()
{
  char str[100];
  printf("Enter a string : ");
  fgets(str, 100, stdin);

  char ch;
  printf("enter a character : ");
  scanf("%c", &ch);

  check(str, ch);

  return 0;
}

void check(char arr[], char ch)
{
    for(int i=0; arr[i] != '\0'; i++)
    {
         if(arr[i] == ch)
         {
            printf("%c is present in %s\n", ch, arr);
            return; // Important
         }
    }
    printf("%c is not present in %s\n", ch, arr);
}
