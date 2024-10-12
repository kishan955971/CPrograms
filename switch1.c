#include<stdio.h>
int main()
{
    int monthno;
    int year;
    printf("Enter value of monthno=");
    scanf("%d",&monthno);
   
    switch(monthno)
    {
        case 1:
        printf("january");
        break;
        case 3:
        printf("march");
        break;
        case 5:
        printf("may");
        break;
        case 7:
        printf("july");
        break;
        case 8:
        printf("august");
        break;
        case 10:
        printf("octumber");
        break;
        case 12:
        printf("december");
        printf("31");
        break;

case 4:
case 6:
case  9:
case 11:
printf("30");
break;

        case 2:
         printf("enter value of year number=");
         scanf("%d",&year);
        printf("february ");
        if(year%400==0||(year%4==0&&year%100!=0))
        
        {
            printf("day 29");
        }
        else
        printf("day 28");
        break;        
    }
    return 0;
}