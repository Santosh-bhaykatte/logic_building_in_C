// break statement
#include<stdio.h> // standard input output
#include<conio.h> // console input output

int main()
{
    for(int i=0; i<=10; i++) // for( initialization ; condition ; updation)
    {
        printf("%d\n", i);
        if(i == 5)
        {
            break;
        }
    }

    return 0;
}
