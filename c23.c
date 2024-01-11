// Multiple if statements

#include<stdio.h>

int main()
{
    int emp_id, base_salary;
    float bonus, tot;
    char name[50]; 

    printf("Enter your emp id : ");
    scanf("%d", &emp_id);

    printf("Enter your name : ");
    scanf("%s", name);

    printf("Enter your salary : ");
    scanf("%d", &base_salary);

    printf("\n");

    if(base_salary>=50000)
    {
        bonus = 0.50 * base_salary;
        tot = bonus + base_salary;
        printf("your name : %s\n", name);
        printf("your bonus : %f \n", bonus);
        printf("your Total salary : %f \n", tot);
    }

    printf("\n");

    if(base_salary>=30000 && base_salary<50000)
    {
        bonus = 0.37 * base_salary;
        tot = bonus + base_salary;
        printf("your name is %s\n", name);
        printf("your bonus is %f \n", bonus);
        printf("your Total salary is %f \n", tot);
    }

    printf("\n");
    
    if(base_salary<30000)
    {
        bonus = 0.18 * base_salary;
        tot = bonus + base_salary;
        printf("your name is %s\n", name);
        printf("your bonus is %f \n", bonus);
        printf("your Total salary is %f \n", tot);
    }

    return 0;
} 