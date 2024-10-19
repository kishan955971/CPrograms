#include<stdio.h>
int main()
{
	int a[2][2]={{2,3},{4,5}};
	int m=2,n=2;
	int i,j;
	for(i=0;i<=m-2;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
