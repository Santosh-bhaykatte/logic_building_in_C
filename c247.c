// Dynamic memory allocation
// functions - malloc() , calloc(), free(), realloc()
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    printf("Enter numbers : ");
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Output
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}