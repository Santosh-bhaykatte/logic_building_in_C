//format info.(name, cgpa, roll, course) of 5 students in a table like structure in file 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[50];
    float cgpa;
    char course[50];
};

void inputData(struct student stu[], int n)
{
    char Name[50] = {0};
    int choice;

    for(int i = 0; i<n; i++)
    {
        printf("\nEnter roll no : ");
        scanf("%d", &stu[i].roll);

        getchar(); // consume newline char

        printf("Enter your name : ");
        fgets(Name, 50, stdin);
        strcpy(stu[i].name, Name);

        printf("Enter your cgpa : ");
        scanf("%f", &stu[i].cgpa);

        printf("Courses : \n");
        printf("1. COMPUTER\n2. FINANCE\n3. MARKETING\n");

        printf("enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : 
                   strcpy(stu[i].course, "COMPUTER");
                   break; 

            case 2 : 
                   strcpy(stu[i].course, "FINANCE");
                   break; 

            case 3 : 
                   strcpy(stu[i].course, "MARKETING");
                   break;

            default:
                   strcpy(stu[i].course, "NULL");
                   break;        
        }
        
    }
}


int main()
{
    struct student s[5];

    inputData(s, 5);

    // output to file
    FILE *fptr;
    fptr = fopen("studentInfo.txt", "w");

    fprintf(fptr, "+------------+--------------------+------+----------+\n");
    fprintf(fptr, "| Roll No.   | Name               | CGPA | Course   |\n");
    fprintf(fptr, "+------------+--------------------+------+----------+\n");

    for(int i = 0; i<5; i++)
    {
        fprintf(fptr, "| %10d | %-20s | %4.2f | %-10s |", s[i].roll, s[i].name, s[i].cgpa, s[i].course);
    }

    fprintf(fptr, "\n+------------+--------------------+------+----------+\n");

    fclose(fptr);

    return 0;
}