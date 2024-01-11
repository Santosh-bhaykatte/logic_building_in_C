// sum of three numbers if they are within the specified range 0 < x < 100 , -50 <= y < 50 , 100 < z <= 200
#include<stdio.h>

int main()
{
    int x, y, z, sum;
    printf("Enter values of x, y and z : \n");
    scanf("%d%d%d", &x, &y, &z);

    if((x > 0 && x < 100) && (y >= -50 && y < 50) && (z > 100 && z <= 200))
    {
        sum = x + y + z;
        printf("sum = %d", sum);
    }
    else{
        printf("Invalid data\n");
    }

    return 0;
}


