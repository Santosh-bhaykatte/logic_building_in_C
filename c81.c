// Multi-dimensional array ( 2D array )
#include<stdio.h>

int main()
{
    int marks[3][3];

    marks[0][0] = 97;
    marks[0][1] = 92;
    marks[0][2] = 95;

    marks[1][0] = 90;
    marks[1][1] = 94;
    marks[1][2] = 99;
    
    marks[2][0] = 90;
    marks[2][1] = 94;
    marks[2][2] = 99;

    printf("%d", marks[2][2]);
    return 0;
}
