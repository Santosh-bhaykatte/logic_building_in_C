// Salting ( password protection )
#include<stdio.h>
#include<string.h>

void Salting(char *);

int main()
{
    char password[100];
    printf("Enter your password : ");
    scanf("%s", password);

    Salting(password);

    return 0;
}

void Salting(char password[])
{
    char newPassword[100];
    char salt[50] = "@37%3gmail.com";

    strcpy(newPassword, password);

    printf("Your new password is : %s", strcat(newPassword, salt));
}
