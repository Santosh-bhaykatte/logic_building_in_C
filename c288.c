// goto statement (jumping statement)
// used to repeat some part of program for particular condition
// can also be used to break from multiple loops at same time
// decreases code readibility & compleceted
#include<stdio.h>

int main()
{  
    int num, i = 1;
    printf("enter a number : ");
    scanf("%d", &num);

    table:
    printf("%d x %d = %d\n", num, i, num*i);
    i++;
    if(i<=10)
    goto table;

    return 0;
}