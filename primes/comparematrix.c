#include<stdio.h>
int main()
{
	int a=3,b=5,t;
	t=a;
	a=b;
	b=t;
	printf("%d %d",b,t);
	return 0;
}
