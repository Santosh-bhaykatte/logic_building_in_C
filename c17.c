// if else - age 
#include<stdio.h>

int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Adult\n");
        printf("Can Vote\n");
    }
    else{
        printf("Not Adult\n");
        printf("Can Not Vote\n");
    }

    return 0;
}
