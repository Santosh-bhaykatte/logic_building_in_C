// Area of square , circle using function 
#include<stdio.h>

float squareArea(float);
float circleArea(float);

int main()
{
    float side, rad;
    printf("Enter side : ");
    scanf("%f", &side);
    float area_square =  squareArea(side);
    printf("Area of square = %f\n", area_square);

    printf("Enter radius : ");
    scanf("%f", &rad);
    float area_circle =  circleArea(rad);
    printf("Area of circle = %f", area_circle);

    return 0;
}

float squareArea(float side)
{
    return side*side ;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad ;
}