// Array program
#include<stdio.h>

int main()
{
    int marks[3]; // integer array

    printf("Enter marks of phy : ");
    scanf("%d", &marks[1]);
    
    printf("Enter marks of chem : ");
    scanf("%d", &marks[2]);

    printf("Enter marks of math : ");
    scanf("%d", &marks[3]);

    printf("phy = %d\nchem = %d\nmath = %d", marks[1], marks[2], marks[3]);
   
    return 0;
}
