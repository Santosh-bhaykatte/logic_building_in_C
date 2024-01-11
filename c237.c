// program to print two parts of complex number
// one part is imaginary and other part is real
#include<stdio.h>

struct complex{
    int real;
    int img;
};

void printComplex(struct complex *num)
{
     printf("\nReal part of number : %d\n", num->real);
     printf("img part of number : %d\n\n", num->img);
}

int main()
{
    struct complex number1;
     
    printf("\nEnter first part of num : ");
    scanf("%d", &number1.real);

    printf("Enter second part of num : ");
    scanf("%d", &number1.img);

    printComplex(&number1);

    return 0;
}