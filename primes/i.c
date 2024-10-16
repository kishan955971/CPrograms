#include<stdio.h>
int main()
{
	int n=7,i,j,condition,mid;
	mid=(n+1)/2;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
		condition=i==j&&i>4||i+j==n+1&&j<=4||j==1||j==n||i>=mid||i+j==n;
		if(condition)
		printf("o");
		else
		printf(" ");
	}
	printf("\n");
}
}
