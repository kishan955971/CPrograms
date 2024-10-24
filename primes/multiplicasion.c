#include<stdio.h>
int main()
{
	int a[2][2]={{0,1},{1,0}};
	int b[2][2]={{2,3},{3,6}};
	int c[2][2];
	int m=2,n=2,r=2;
	int i,j,k;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter value of matrix number=");
			scanf("%d",a[i][j]);
		}
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter value of matrix number=");
			scanf("%d",b[i][j]);
		}
	}
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
	printf("\n");
		for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
	c[i][j]=a[i][j]+b[i][j];
}
printf("\n");
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
