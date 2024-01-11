// Area of triangle
#include<stdio.h>

int main()
{ 
     float base, height;
     printf("Enter base : ");
     scanf("%f", &base);
     printf("Enter height : ");
     scanf("%f", &height);
     float Area = 0.5 * base * height ;
     printf("Area of triangle : %f", Area );
    return 0;
}