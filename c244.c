// storing student information into file "student.txt"
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    
    int age;
    char name[100];
    float cgpa;

    printf("Enter age : ");
    scanf("%d", &age);
    printf("Enter name : ");
    scanf("%s", name);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name : %s\n", name);
    fprintf(fptr, "student age : %d\n", age);
    fprintf(fptr, "student cgpa : %f\n", cgpa);

    fclose(fptr);
    return 0;
}