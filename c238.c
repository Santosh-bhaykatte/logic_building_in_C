// program to store bank details of person and print details
#include<stdio.h>

typedef struct bankAccount{
    int ac_no;
    char name[100];
    char ifsc[50];;
} acc;


void printDetails(acc Ac1)
{
    printf("\nAccount no. : %d\n", Ac1.ac_no);
    printf("Account holder : %s\n", Ac1.name);
    printf("IFSC code : %s\n\n", Ac1.ifsc);
}

int main()
{
    acc account1;
    
    printf("Enter details : \n");

    printf("Enter account no. : ");
    scanf("%d", &account1.ac_no);

    printf("Enter ac. holder name : ");
    scanf("%s", &account1.name);

    printf("Enter IFSC code : ");
    scanf("%s", &account1.ifsc);
    
    printf("\n");
    printDetails(account1);

    return 0;
}