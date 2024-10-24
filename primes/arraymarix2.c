#include<stdio.h>
int main()
{
	int a[2][2]={{1,0},{0,1}};
	int b[2][2]={{2,3},{4,5}};
	int c[2][2]={0};
	int m=2,n=2,r=2;
	int i,j,k;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
		printf("%4d",a[i][j]);
	}
	printf("\n");
}
printf("\n");
for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
		printf("%4d",b[i][j]);
	}
	printf("\n");
}
for(i=0;i<=m-1;i++)
{
	for(j=0;j<=n-1;j++)
	{
		for(k=0;k<=r-1;k++)
		{
			c[i][j]=c[i][j]+a[i][k]*b[j][k];
		}
		printf("\n");
	}
}
printf("\n");
for(i=0;i<=m-1;i++)
{
	for(j=0;j<=n-1;j++)
	{
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
