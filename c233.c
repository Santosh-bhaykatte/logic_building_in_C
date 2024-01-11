// structures program
#include<stdio.h>
#include<string.h>

struct student{
    int rno;
    char name[100];
    float cgpa;
};

int main()
{
    struct student s1;
    char name[100];
    s1.rno = 12;
    s1.cgpa = 8.9;

    printf("Enter name : ");
    fgets(name, 100, stdin);

    strcpy(s1.name, name);

    printf("student name : %s", s1.name);
    printf("student roll : %d\n", s1.rno);
    printf("student cgpa : %f\n", s1.cgpa);

    return 0;
}