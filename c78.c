// Array as pointer - traverse an array
#include<stdio.h> // preprocessor directive

int main()
{
    int aadhar[5];
    int *ptr = aadhar;
    
    // Input
    for(int i=0; i<5 ; i++)
    {
       printf("%d index : ", i);
       scanf("%d", &aadhar[i]);
    }

    // Output
    for(int i=0; i<5; i++)
    {
       printf("%d index : %d\n", i, aadhar[i]);
    }

    return 0;
}