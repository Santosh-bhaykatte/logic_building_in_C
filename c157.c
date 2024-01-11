// program to find two real roots of quadratic equation ( ax^2 - bx + c = 0 ) where (a != 0)
// formula - discriminant (d) = (b^2 - 4ac)
// if (d>0) then  r1 = -b + sqrt(d) / 2*a  &  r2 = -b - sqrt(d) / 2*a
// if (d=0) then  r1 , r2 =  -b/2*a 
// if (d<0) then  roots are unequal and imaginary

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a, b, c, dct ;
    float r1, r2;

    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);

    dct = b*b - 4*a*c;

    if(a == 0)
    {
        printf("Invalid data\n");
    }
    else if(dct > 0)
    {
        r1 = -b + sqrt(dct) / 2*a;
        r2 = -b - sqrt(dct) / 2*a;
        printf("Roots are real and unequal\n");
        printf("root1 = %f\troot2 = %f\n", r1, r2);
    }
    else if(dct == 0)
    {
        r1 = r2 = -b/2*a;
        printf("Roots are real and equal\n");
        printf("root1 = %f\troot2 = %f\n", r1, r2);
    }
    else{
        printf("Roots are imaginary and unequal\n");
    }

    return 0;
}
