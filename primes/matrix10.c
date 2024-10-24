#include<stdio.h>
int main()
{
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{5,6},{7,9}};
	int m=2,n=2;
	int i,j;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
		//	a[i][j]=a[j][i];
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
for(i=0;i<=m-1;i++)
{
	for(j=0;j<=n-1;j++)
	{
			a[i][j]=a[j][i];
		printf("%4d",a[j][i]);
	}
	printf("\n");
}
	return 0;
}
