// Dynamic memory allocation
// functions - malloc() , calloc(), free(), realloc()
// calloc() - initializes with 0

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *ptr;
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    ptr = (char *) calloc(n, sizeof(char));

    // Input
    printf("Enter characters : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%c", &ptr[i]);
    }

    // Output
    for(int i = 0; i<n; i++)
    {
        printf("%c\n", ptr[i]);
    }

    return 0;
}