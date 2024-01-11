// program to print all perfect squares bet 22 to 500
#include<stdio.h>
#include<math.h>

int main()
{
    int srt;
    for(int i=22; i<=500; i++)
    {
        srt = sqrt(i);
        if(srt * srt == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}