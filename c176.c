// program to print all perfect squares between 1000 and 9999 in such way that they are in form of
// AABB eg. 7744
#include<stdio.h>
#include<math.h>

int main()
{
    int i, temp, srt, d1, d2, d3, d4;
    // loop for traverse
    for(i = 1000; i<=9999; i++)
    {
        srt = sqrt(i);

        if(srt*srt == i)
        {
            temp = i;

            d1 = temp % 10;
            temp = temp / 10;

            d2 = temp % 10;
            temp = temp / 10;

            d3 = temp % 10;
            temp = temp / 10;

            d4 = temp % 10;

            if(d1 == d2 && d3 == d4)
            {
                printf("Result = %d\n", i);
            }
            else{
                printf("%d\n", i);
            }
        }
    }

    return 0;
}