//count & print vowels and consonants in a string
#include<stdio.h>
#include<string.h>


void count(char arr[]);

int main()
{
   char str[100];
   printf("Enter a string : ");
   fgets(str, 100, stdin);

   count(str);

   return 0;
}

void count(char arr[])
{
   int count = 0;

   for(int i=0; arr[i] != '\0'; i++)
   {
      if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
      {
         count++;
      }
   }
   printf("Vowels = %d\n", count);
   int length = strlen(arr);
   int consonants = (length - 1) - count ;
   printf("Consonants = %d\n", consonants);
}

