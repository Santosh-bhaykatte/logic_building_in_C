// goto statement (jumping statement)
// used to repeat some part of program for particular condition
// can also be used to break from multiple loops at same time
// decreases code readibility & compleceted
#include<stdio.h>

int main()
{  
    int i, j, k;

    for(i = 0; i<10; i++)
    {
        for(j = 0; j<5; j++)
        {
            for(k = 0; k<3; k++)
            {
                printf("%d %d %d\n", i, j, k);
                if(j == 3)
                {
                    goto out;
                }
            }
        }
    }
    out:

    return 0;
}