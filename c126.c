// display squares of 1 ... n 
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    float i = 1;
    int j = 1;
    
    while(i <= n)
    {
        printf("%d = %f\n", j, pow(i,2));
        j++;
        i++;
    }
     
    return 0;
}