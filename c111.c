// user defined string functions

#include<stdio.h>
#include<string.h>

// String length
int stringLength(char *arr);

// String copy
void stringCopy(char arr1[], char arr2[]);

// string concatenation
void stringConcat(char arr1[], char arr2[]);

// string compare
int stringCompare(char arr1[], char arr2[]);


int main()
{
    // ======= string length ====== //
    
    // char str[100]; // string 100- maximum no. of characters can be present
    // printf("Enter a string : ");
    // fgets(str, 100, stdin);

    // printf("Length is %d\n", stringLength(str));


    // ======= string copy ======= //

    // char oldStr[100];
    // char newStr[100];
    // printf("Enter first string : ");
    // fgets(oldStr, 100, stdin);

    // printf("Enter second string : ");
    // fgets(newStr, 100, stdin);

    // stringCopy(oldStr, newStr);

    // ======= string concat ======= //
    
    // char oldStr[100] = "My name is santosh ";
    // char newStr[50] = "bhaykatte";

    // stringConcat(oldStr, newStr);

    // ======= string compare =======
    
    // char str1[100];
    // char str2[100];

    // printf("Enter first string : ");
    // fgets(str1, 100, stdin);

    // printf("Enter second string : ");
    // fgets(str2, 100, stdin);

    // printf("Comparision = %d\n", stringCompare(str1, str2));

    return 0;
}

// ======== string length function ====== //

// int stringLength(char arr[])
// {
//     int count = 0;
//     for(int i=0; arr[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return (count - 1);
// } 

// ======= string copy function ======= //

// void stringCopy(char arr1[], char arr2[])
// {
//     int i;

//     // char arrT[100];
//     // for(i=0; arr1[i] != '\0'; i++)
//     // {
//     //     arrT[i] = arr1[i];
//     // }
//     // arrT[i] = '\0';
    

//     for(i=0; arr2[i] != '\0'; i++)
//     {
//         arr1[i] = arr2[i];
//     }
//     arr1[i] = '\0';
//     printf("Copied string = %s", arr1);
// }

// ======== string concatenation function ======== //

// void stringConcat(char arr1[], char arr2[])
// {
//     int length1 , length2 , length , i , j , count = 0;
//     length1 = strlen(arr1) ;
//     length2 = strlen(arr2) ;
//     length = length1 + length2 ;

//     for( i = 0; count != length ; i++, count++)
//     {
//         if(arr1[i] == '\0')
//         {
//             for(j=0; arr2[j] != '\0'; j++, i++)
//             {
//                 arr1[i] = arr2[j];
//             }
//             arr1[i] = '\0';
//         }
//     }
//     printf("New string : %s", arr1);
// }


// =========== string compare =========

// int stringCompare(char arr1[], char arr2[])
// {
//     int length1, length2;
//     length1 = strlen(arr1);
//     length2 = strlen(arr2);

//     if(length1 > length2)
//     {
//         return 1;        
//     }
//     else if(length1 < length2)
//     {
//         return -1;
//     }
//     else
//     {
//         return 0;
//     }
// }
