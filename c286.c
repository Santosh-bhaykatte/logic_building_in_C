// user defined strcmp() function
#include<stdio.h>
#include<string.h>

void stringCompare(char arr1[], char arr2[])
{
    int firstLen = strlen(arr1);
    int secLen = strlen(arr2);
    int len;
    
    if(firstLen > secLen)
    {
        len = firstLen;
    }
    else{
        len = secLen;
    }

    // loop
    for(int i = 0; i < len; i++)
    {
        if(arr1[i] == arr2[i])
        {
            if(i == len - 1)
            {
                printf("both strings are equal\n");
                break;
            }
            continue;
        }
        else{
            if(arr1[i] > arr2[i])
            {
                printf("first string is greater\n");
                break;
            }
            else{
                printf("first string is smaller\n");
                break;
            }
        }
    }
}

int main()
{
    char str1[] = "Mahesh";
    char str2[] = "Arvind";

    stringCompare(str1, str2);

    return 0;
}