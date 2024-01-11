// Health - excellent/poor , sex - male/female , resident - city/village ,  25<= age <=35
#include<stdio.h>

int main()
{
    int age;
    char health, sex, resident;

    printf("enter age : ");
    scanf("%d", &age);

    printf("Enter health(e/p), sex(m/f), resident(c/v) \n");
    scanf("%c%c%c", &health, &sex, &resident);

    if((health =='e' || health =='E') && (age>=25 && age<=35) && (resident =='c' || resident =='C') && (sex =='m' || sex =='M'))
    {
        printf("person is insured\n");
        printf("premium = Rs 5 per thousand\n");
        printf("policy cannot exceed Rs 2 lakhs\n");
    }

    if((health=='e' || health=='E') && (age>=25 && age<=35) && (resident=='c' || resident=='C') && (sex=='f' || sex=='F'))
    {
        printf("person is insured\n");
        printf("premium = Rs 3 per thousand\n");
        printf("policy cannot exceed Rs 1 lakhs\n");
    }

    if((health=='p' || health=='P') && (age>=25 && age<=35) && (resident=='v' || resident=='V') && (sex=='m' || sex=='M'))
    {
        printf("person is insured\n");
        printf("premium = Rs 6 per thousand\n");
        printf("policy cannot exceed Rs 10,000\n");
    }
    
    else{
        printf("person is not ensured\n");
    }
    
    return 0;
}