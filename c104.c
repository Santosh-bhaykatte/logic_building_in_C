// real world program
// calculating overtime pay of 10 employees
#include<stdio.h>

int main()
{
    float otpay;
    int hours;

    printf("\n ==== Overtime pay is Rs 12 for every hour worked above 40 hours in week ====\n");

    for(int i=1; i<=10; i++)
    {
        printf("\nEnter no. of hours worked : ");
        scanf("%d", &hours);

        int temp = hours;

        if(hours>40)
        {
            hours = hours - 40;
            otpay = hours * 12;

            printf("\nNo. of hours worked = %d\n", temp);
            printf("\novertime pay = Rs %f\n", otpay);
        }
        else{
            printf("\nNo. of hours worked ( %d ) is less than OR equal to 40 hrs\n\nHence no overtime pay\n", temp);
        }
    }

    return 0;
}