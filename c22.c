 /*  nested switch statement */
#include<stdio.h>

int main()
{  
    int date, month , year;
    printf("Enter date(1-31) \n");
    scanf("%d", &date);
    printf("Enter month(1-12)\n");
    scanf("%d", &month);
    printf("Enter year (2022) \n");
    scanf("%d", &year);

    switch ( date )
    {
    case 1 :
           printf(" date : 1");
           switch ( month )
           {
           case 1 :
             printf(" january");
             break;
           case 2 :
             printf(" february");
             break;
           case 3 :
             printf(" march");
             break;
           case 4 :
             printf(" april");
             break;
           case 5 :
             printf(" may");
             break;
           case 6 :
             printf(" june");
             break;
           case 7 :
             printf(" jully");
             break;
           case 8 :
             printf(" august");
             break;
           case 9 :
             printf(" september");
             break;
           case 10 :
             printf(" octomber");
             break;
           case 11 :
             printf(" november");
             break;
           case 12 :
             printf("december");
             break;
           
           default:
              printf("\n not a valid month");
              break;
               
           }
            switch ( year )
              {
                case 2022:
                  printf(" 2022");
                  break;
                  
                default:
                   printf("\n not a valid year");
              } 
        break;

        case 2 :
           printf(" date : 2 ");
           switch ( month )
           {
           case 1 :
             printf(" january");
             break;
           case 2 :
             printf(" february");
             break;
           case 3 :
             printf(" march");
             break;
           case 4 :
             printf(" april");
             break;
           case 5 :
             printf(" may");
             break;
           case 6 :
             printf(" june");
             break;
           case 7 :
             printf(" jully");
             break;
           case 8 :
             printf(" august");
             break;
           case 9 :
             printf(" september");
             break;
           case 10 :
             printf(" octomber");
             break;
           case 11 :
             printf(" november");
             break;
           case 12 :
             printf(" december");
             break;
           
           default:
              printf("\n not a valid month");
              break;
                            
           }
           switch ( year )
              {
              case 2022:
                  printf(" 2022");
                break;
               default:
                  printf("\n not a valid year\n");
              }
         break;
         
         case 3 :
           printf(" date : 3 ");
           switch ( month )
           {
           case 1 :
             printf(" january");
             break;
           case 2 :
             printf(" february");
             break;
           case 3 :
             printf(" march");
             break;
           case 4 :
             printf(" april");
             break;
           case 5 :
             printf(" may");
             break;
           case 6 :
             printf(" june");
             break;
           case 7 :
             printf(" jully");
             break;
           case 8 :
             printf(" august");
             break;
           case 9 :
             printf(" september");
             break;
           case 10 :
             printf(" octomber");
             break;
           case 11 :
             printf(" november");
             break;
           case 12 :
             printf(" december");
             break;
           
           default:
              printf("\n not a valid month");
              break;
                            
           }
           switch ( year )
              {
              case 2022:
                  printf(" 2022");
                break;
               default:
                  printf("\n not a valid year\n");
              }
         break;

    default:
       printf("\n not a valid date");
        break;
    }

     return 0;
}
 