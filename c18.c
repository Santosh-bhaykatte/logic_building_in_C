// else if ladder 
#include<stdio.h>

int main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d", &marks);
    
    if(marks>=90)
    {
        printf("Grade is A+");
    }
    else if(marks<90 && marks>=80)
    {
        printf("Grade is A");
    }
    else if(marks<80 && marks>=70)
    {
        printf("Grade is B");
    }
    else if(marks<70 && marks>=50)
    {
        printf("Grade is C");
    }
    else if(marks<50 && marks>=30)
    {
        printf("Grade is D");
    }
    else
    {
        printf("You are failed\n");
    }

    return 0;
}