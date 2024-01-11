// Array logical analysis
// * - value at address / indirection / dereference operator
#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
     
    printf("%d\n", *(arr + 0));
    printf("%d\n", *(arr + 1));
    
    return 0;
}
