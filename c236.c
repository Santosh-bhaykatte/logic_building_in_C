// program to store two vectors and print sum of two vectors
#include<stdio.h>

typedef struct vector{
    int x;
    int y;
} vec;

void calcSum(vec v1, vec v2, vec *sum)
{
    (*sum).x = v1.x + v2.x;
    (*sum).y = v1.y + v2.y;
}

int main()
{
    vec v1, v2;
    vec sum = {0};
    
    printf("\nEnter x component of v1 : ");
    scanf("%d", &v1.x);

    printf("Enter y component of v1 : ");
    scanf("%d", &v1.y);
   
    printf("\nEnter x component of v2 : ");
    scanf("%d", &v2.x);

    printf("Enter y component of v2 : ");
    scanf("%d", &v2.y);

    //function call

    calcSum(v1, v2, &sum);

    printf("\nsum of x component : %d\n", sum.x);
    printf("sum of y component : %d\n\n", sum.y);

    return 0;
}