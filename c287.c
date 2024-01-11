// static variables & functions
#include<stdio.h>

static int code; // static global var

int func()
{
    static int count; // static local var
    count++;
    return count;
}

int total(int n)
{
    static int sum = 0;
    if(sum == 5)
    {
        return 0;
    }
    sum = sum + n;
    total(n);
    return sum;
}

int main()
{  
    code++;
    printf("%d", code);
    printf("\n%d", --code);
    printf("\n%d", func());
    printf("\n%d", func());
    printf("\n%d", total(1));

    return 0;
}