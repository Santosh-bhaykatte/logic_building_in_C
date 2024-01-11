// nested if else
#include<stdio.h>

int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);

    if(n > 0)
    {
        printf("%d is Positive Number\n",n );

        if(n % 2 == 0)
        {
            printf("%d is a Even Number\n", n);
        }
        else{
            printf("%d is a Odd Number", n);
        }
    }
    else{
        printf("%d is a Negative Number", n);
    }

    return 0;
}
