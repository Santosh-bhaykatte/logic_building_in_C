// Dynamic memory allocation
// functions - malloc() , calloc(), free(), realloc()
// calloc() - initializes with 0

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    //Input
    
    printf("Enter numbers : ");
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("\n");
    
    // Output
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", ptr[i]);
    }
         
    free(ptr);

    ptr = (int *) calloc(2, sizeof(int));
     
    printf("\n");
    for(int i = 0; i<2; i++) 
    {
        printf("%d\n", ptr[i]);
    }
    
    return 0;
}