// pointer to structure
// passing structures as function arguments
// array of structures

#include <stdio.h>

struct address
{
    int houseNo;
    int blockNo;
    char city[100];
    char state[100];
    int pincode;
};

void printInfo(struct address *add)
{
    printf("Address : House no - %d, block no - %d, %s, %s, %d", add->houseNo, add->blockNo, add->city, add->state, add->pincode);
}

int main()
{
    struct address adds[3]; // array of structures

    int i, j;
    
    // Input
    for(i = 0, j = 1; i < 3; i++, j++)
    {
        printf("\nEnter info for person %d : \n", j);
        
        printf("Enter house no : ");
        scanf("%d", &adds[i].houseNo);
        
        printf("Enter block no : ");
        scanf("%d", &adds[i].blockNo);

        printf("Enter city : ");
        scanf("%s", &adds[i].city);

        printf("Enter state : ");
        scanf("%s", &adds[i].state);

        printf("Enter pincode : ");
        scanf("%d", &adds[i].pincode);
    }
     
    printf("\n");

    //Output
    for(i = 0; i < 3; i++)
    {
        printInfo(&adds[i]);
        printf("\n");
    }

    printf("\n");

    return 0;
}