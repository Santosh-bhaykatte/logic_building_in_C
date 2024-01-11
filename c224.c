// program to reverse a string 
#include<stdio.h>
#include<string.h>

void reverseStr(char arr[]);

int main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str, 50, stdin);

    reverseStr(str);
    
    printf("Reversed string : ");
    puts(str);

    return 0;
}

void reverseStr(char arr[])
{
    char firstVal, secVal;

    int n = strlen(arr);

    for(int i = 0; i < n/2; i++)    // Imp
    {
        firstVal = arr[i];
        secVal = arr[n - i - 1];
        arr[i] = secVal;
        arr[n - i - 1] = firstVal;
    }

}

