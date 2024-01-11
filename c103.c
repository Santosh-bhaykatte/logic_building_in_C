// conditional program
#include<stdio.h>

int main()
{
    float hard, carbon, tensile ;
    printf("hardness of steel : ");
    scanf("%f", &hard);
    printf("carbon content : ");
    scanf("%f", &carbon);
    printf("tensile strength : ");
    scanf("%f", &tensile);

    if(hard>50 && carbon<0.7 && tensile>5600)
    {
        printf("grade 10\n");
    }
    else if(hard>50 && carbon<0.7 && tensile<5600)
    {
        printf("grade 9\n");
    }
    else if(hard<=50 && carbon<0.7 && tensile>5600)
    {
        printf("grade 8\n");
    }
    else if(hard>50 && carbon>=0.7 && tensile>5600)
    {
        printf("grade 7\n");
    }
    else
    {
        printf("grade 6\n");
    }

    return 0;
}