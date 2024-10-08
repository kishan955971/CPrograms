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
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
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