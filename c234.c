// structure program
// pointer to structure
#include<stdio.h>

struct employee{
    int id;
    char name[100];
    float salary;
};

int main()
{
    struct employee e1 = {123, "Sundar", 34000.56};
    struct employee *ptr = &e1;

    printf("\nEmployee name : %s\n", (*ptr).name);
    printf("Employee id : %d\n", (*ptr).id);
    printf("Employee salary : %f\n\n", ptr->salary);

    return 0;
}
