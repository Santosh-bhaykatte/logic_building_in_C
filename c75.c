// pointer arithmetic ( Increment and Decrement )
// pointer can be Incremented , Decremented
// it increments and decrements W.R.T it`s data_type
// we can also compare two pointers & subtract one pointer from another

#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;

    printf("%p\n", &ptr);
    printf("%p\n", &age);
    printf("%p\n", ptr);
    ptr++;
    printf("%p\n", ptr);
    ptr--;
    printf("%p\n", ptr);
    
    char ch = '@';
    char *At = &ch;
    printf("%p\n", At++);
    printf("%p\n", At);

    return 0;
}