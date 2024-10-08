#include<stdio.h>
int main()
{
    int weekno;
    printf("enter value of number=");
    scanf("%d",&weekno);
    switch(weekno)
    {
        case 1:
        printf("sunday\n");
        printf("HOLIDAY");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thusday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("saturday\n");
        printf("HOLIDAY");
        break;
        default:
  printf("week number error");
    }
    return 0;
}