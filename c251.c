// Allocate memory to store 5 odd numbers and reallocate it to store first 10 even numbers 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("oddEven.txt", "w");

    int *ptr;
    ptr = (int *) calloc(5, sizeof(5));

    //Input odd
    printf("Enter odd numbers : ");
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    fprintf(fptr, "Odd numbers : ");

    //Output odd
    printf("Odd no. - ");
    for(int i = 0; i<5; i++)
    {
        printf("%d\t", ptr[i]);
        fprintf(fptr, "%d\t", ptr[i]);
    }

    //reallocation
    // ptr = realloc(ptr, new_size);

    ptr = realloc(ptr, 10);
    
    printf("\n");

    //Input even
    printf("Enter even numbers : ");
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &ptr[i]);
    }
     
    fprintf(fptr, "\nEven numbers : ");

    //Output even
    printf("Even no. - ");
    for(int i = 0; i<10; i++)
    {
        printf("%d\t", ptr[i]);
        fprintf(fptr, "%d\t", ptr[i]);
    }

    free(ptr);

    fclose(fptr);
    return 0;
}