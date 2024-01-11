// logical program
#include<stdio.h>

int main()
{
    int a=1, b=2, c=0, d=4 ;
    if(a)
    {
        b = !c;
        if(c)
        {
            c = c+d ;
        }
        else{
            d = d-c;
        }
    }
    printf("%d\t%d\t%d\t%d",a,b,c,d);

    return 0;
}