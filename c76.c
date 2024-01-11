// pointer arithmetic (comparision and difference)
#include<stdio.h>

int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n", ptr);
    printf("%u\n", _ptr);

    printf("Difference = %u\n", &ptr - &_ptr);
    _ptr = &age;
    printf("Comparison = %u\n", ptr >= _ptr);
    
    return 0;
}

