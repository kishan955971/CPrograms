#include<stdio.h>
#include<math.h>
int main()
{
	int i,n=500,j,isprime,limit,count=0,loopcount=0;
//printf("Enter value of number=");
//	scanf("%d",&n);
for(i=2;i<=n;i++)
{

	limit=(int)sqrt(i);
	isprime=1;
	for(j=2;j<=limit;j++)
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
