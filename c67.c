// logical program of pointer
#include<stdio.h>

float main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0 ;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr+=5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    printf("%u\n", &ptr);
    printf("%u\n", &x);
    printf("%u\n", ptr);
    printf("%u\n", ptr++);
    printf("%u\n", ptr);

    return 0.0;
}

