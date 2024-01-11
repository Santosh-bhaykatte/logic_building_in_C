// program to print all perfect squares between 1000 and 9999 in such way that first two digits 
// and last two digits are also perfect squares eg.  1600, 1681 ... , 2500
#include<stdio.h>
#include<math.h>

int main()
{
    int i, srt, right, left, Rsrt, Lsrt;
    // loop for traverse
    for(i = 1000; i<=9999; i++)
    {
        srt = sqrt(i);
        
        if(srt*srt == i)
        {
            right = i % 100;
            left = i / 100;
            Rsrt = sqrt(right);
            Lsrt = sqrt(left);

            if(Rsrt*Rsrt == right && Lsrt*Lsrt == left)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
