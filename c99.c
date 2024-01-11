// largest and smallest among five numbers
#include<stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, largest, smallest;
    printf("Enter five numbers : \n");
    fflush(stdin);
    
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    largest = n1 ;

    if(n1>largest)
    largest = n1;

    if(n2>largest)
    largest = n2;

    if(n3>largest)
    largest = n3;

    if(n4>largest)
    largest = n4;

    if(n5>largest)
    largest = n5;

    printf("largest is %d\n", largest);

    smallest = n1 ;

    if(n1<smallest)
    smallest = n1;
     
    if(n2<smallest)
    smallest = n2;

    if(n3<smallest)
    smallest = n3;

    if(n4<smallest)
    smallest = n4;

    if(n5<smallest)
    smallest = n5; 

    printf("smallest is %d", smallest);
    
    return 0;
}