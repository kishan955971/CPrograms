#include<stdio.h>
void printmatrix(int a[2][2],int m,int n)

{
	int i,j;
		for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	
}
int main()
{
	int a[2][2]={{7,8,},{6,5,}};
	int b[2][2]={{2,3,},{4,4,}};
	int c[2][2];
		int m=2,n=2;
	int i,j;
	printmatrix(a,2,2);
	printmatrix(b,2,2);
	
	
	
		for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
	c[i][j]=a[i][j]-b[i][j];
		}
		printf("\n");
	}
	printmatrix(c,2,2);
	
	return 0;
}

