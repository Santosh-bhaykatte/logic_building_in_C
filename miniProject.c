// simple calculator using C
#include<stdio.h>

int main()
{  
    float num1, num2;
    char ch;
    printf("provide number : ");
    scanf("%f", &num1);

    getchar(); // consume residual in input buffer
    printf("enter operation : ");
    scanf("%c", &ch);
    
    printf("provide number : ");
    scanf("%f", &num2);

    switch(ch)
    {
        case '*':
                printf("\nTotal : %f", num1 * num2);
                break;
        case '/':
                printf("\nTotal : %f", num1 / num2);
                break;
        case '+':
                printf("\nTotal : %f", num1 + num2);
                break;
        case '-':
                printf("\nTotal : %f", num1 - num2);
                break;
        // case '%':
        //         printf("\nTotal : %d", num1 % num2);
        //         break;
        default:
                printf("\ninvalid operation");
                break;
    }

    return 0;
}