// program to print armstrong numbers from 1 to 10000
#include<stdio.h>
#include<math.h>

int main()
{
    int i, temp, count, sum;

    // loop
    for(i = 1; i <= 10000; i++)
    {
        temp = i;

        // Count digits
        count = 0;
        while(temp != 0)
        {
            temp = temp / 10;
            count++;
        }
        
        temp = i; // Important step

        // Sum of digits
        sum = 0; 
        sum = pow((temp % 10), count) +
              pow(((temp % 100 - temp % 10)/10), count) +
              pow(((temp % 1000 - temp % 100)/100), count) +
              pow(((temp % 10000 - temp % 1000)/1000), count) ;

        // condition
        if(sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}