#include<stdio.h>
int main()
{
	int t=4,i;
	for(i=5;i<=500;i=i+t)
	{
	t=6-t;
	printf("%d,t=%d\t",i,t);
}
return 0;
	
}
