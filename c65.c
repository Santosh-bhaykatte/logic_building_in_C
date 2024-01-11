// pointer program
#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n", _age);
    printf("%u\n", &age);
    printf("%d\n", *(&age));
    
    return 0;
}