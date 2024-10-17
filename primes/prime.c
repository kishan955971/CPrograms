#include<stdio.h>
#include<math.h>
int main()
{
	int i,n=500,j,isprime,limit,count=0,loopcount=0,t,p;
printf("2,3");
count=2;
t=4;
for(i=5;i<=n;i=i+t)
{
t=6-t;
	limit=(int)sqrt(i);
	isprime=1;
	p=4;
	for(j=5;j<=limit;j=j+p)
	{
	p=6-p;
		loopcount++;
	if(i % j==0)
	{
		isprime=0;
		break;
	}
	}
	if(isprime)
	{
		printf("%d,",i);
		count++;
	}
}
	printf("\nTotal primes=%d,loop count=%d",count,loopcount);
	return 0;
}

