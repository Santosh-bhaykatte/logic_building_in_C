// perimeter of rectangle 
#include<stdio.h>

int main()
{
    int l,b;
    printf("Enter length : ");
    scanf("%d", &l);
    printf("Enter breadth : ");
    scanf("%d", &b);

    int peri = 2*(l + b);

    printf("Perimeter of rect : %d", peri);

    return 0;
}