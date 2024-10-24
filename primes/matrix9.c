#include<stdio.h>
int main()
{
	int a[2][2]={{2,3},{4,7}};
	int b[2][2]={{5,4},{6,8}};
	int c[2][2];
	int m=2,n=2;
	int i,j;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			c[2][2]=a[2][2]+b[2][2];
		
	
	printf("%d",c[2][2]);
}
}
	return 0;
}
