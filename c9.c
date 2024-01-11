// Reverse a number - 4568
#include<stdio.h>

int main()
{
    int n, d, revnum = 0;
    printf("Enter above number : ");
    scanf("%d", &n);
    d = n % 10 ;
    revnum = revnum + d*1000;
    n = n/10 ;
    d = n % 10 ;
    revnum = revnum + d*100;
    n = n/10 ;
    d = n % 10 ;
    revnum = revnum + d*10;
    n = n/10 ;
    d = n % 10 ;
    revnum = revnum + d*1;
    
    printf("Reverse number : %d", revnum);
    return 0;
}