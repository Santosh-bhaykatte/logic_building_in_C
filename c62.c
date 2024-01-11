// function to calculate percentage scored 
#include<stdio.h>

float pctq(int eng, int sans, int math)
{
    int tot = eng + sans + math ;
    return tot/3 ;
}

int main()
{
    int m1,m2,m3 ;
    printf("Enter marks of english : ");
    scanf("%d", &m1);
    printf("Enter marks of sanskrit : ");
    scanf("%d", &m2);
    printf("Enter marks of maths : ");
    scanf("%d", &m3);
  
    printf("Percentage = %f", pctq(m1, m2, m3));

    return 0;
}
