#include<stdio.h>
#include<math.h>
int main()
{
	int i,n=500,j,isprime,limit,count=0,loopcount=0,t;
//printf("Enter value of number=");
//	scanf("%d",&n);
printf("2,3");
count=2;
t=4;
for(i=5;i<=n;i=i+t)
{
t=6-t;
	limit=(int)sqrt(i);
	isprime=1;
	for(j=3;j<=limit;j=j+2)
	{
		loopcount++;
	if(i % j==0)
	{
		isprime=0;
//		printf("%d",j);
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

