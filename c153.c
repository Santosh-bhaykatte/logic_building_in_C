// program to convert celcius to farahenite & vice-versa on user choice 
#include<stdio.h>

int main()
{
    int n;
    float cel, far, temp1, temp2;
    printf("Press 1 for (cel to far) & 2 for (far to cel) : ");
    scanf("%d", &n);

    switch(n)
    {
        case 1: 
             printf("Enter temprature : ");
             scanf("%f", &cel);
             temp1 = cel;
             far = temp1 * 1.8 + 32;
             printf("%f far", far);
             break;

        case 2: 
             printf("Enter temprature : ");
             scanf("%f", &far);
             temp2 = far;
             cel = ((temp2 - 32)*5) / 9;
             printf("%f cel", cel);
             break;
    }
    
    return 0;
}