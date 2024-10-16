#include<stdio.h>
int main()
{
	int day,month,year,noofdays;
	printf("Enter value of day=");
	scanf("%d",&day);
	printf("Enter value of month=");
	scanf("%d",&month);
	printf("Enter value of year=");
	scanf("%d",&year);
	if(year<1)
	{
		printf("year is error=%d",year);
		return 0;
	}
	if(month<1||month>12)
	{
		printf("month is error=%d",month);
		return 0;
	}
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		noofdays=31;
	}
	else
	if(month==4||month==6||month==9||month==11)
	{
		noofdays=30;
	}
	//esle
	if(month==2)
	{
		if(year%400==0||(year%4==0&&year%100!=0))
		noofdays=29;
	else
	noofdays=28;
}
	if(day<1||day>noofdays)
	{
		printf("day is error=%d",day);
		return 0;
	}
	printf("day is correct=%d/%d/%d",day,month,year);
	return 0;
}
