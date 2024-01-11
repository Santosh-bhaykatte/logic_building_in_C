// Important logical program

/* pattern using nested loop*/
/*           
        ******     and    *
        *****             **
        ****              ***
        ***               ****
        **                *****
        *                 ******
*/


// short method
#include<stdio.h>

int main()
{
    int n;
    printf("enter no. of rows : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    // for(int i=n; i>=1; i--)
    // {
    //     for(int j=i; j>=1; j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}

// long method for fixed rows eg. 6

// #include<stdio.h>

// int main()
// {
//     for(int j=1; j<=1; j++)
//     {
//         for(int i=1; i<=6; i++)
//         {
//             printf("*");
//         }
//         printf("\n");

//         for(int i=1; i<=5; i++)
//         {
//             printf("*");
//         }
//         printf("\n");

//         for(int i=1; i<=4; i++)
//         {
//             printf("*");
//         }
//         printf("\n");

//         for(int i=1; i<=3; i++)
//         {
//             printf("*");
//         }
//         printf("\n");

//         for(int i=1; i<=2; i++)
//         {
//             printf("*");
//         }
//         printf("\n");

//         for(int i=1; i<=1; i++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }

//     return 0;
// }