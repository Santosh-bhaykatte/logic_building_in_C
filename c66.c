// Pointer format specifier for Address ( %p , %u )

#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
  
    // address
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    // value
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}
