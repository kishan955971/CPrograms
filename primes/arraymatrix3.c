#include<stdio.h>
int main()
{
	int a[2][2]={{1,2,},{3,4,}};
	int b[2][2]={{5,6,},{7,8,}};
	int c[2][2];
	int i,j,k,m=2,n=2;
	for(i=1;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			for(k=1;k<3;k++)
			{
			c[i][j]=a[i][k]+b[k][j];
		}
	}
}
for(i=1;i<3;i++)
{
	for(j=1;j<3;j++)
	{
	printf("%4d ",c[2][2]);
}
printf("\n");
}
return 0;
}

