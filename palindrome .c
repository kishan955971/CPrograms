#include<stdio.h>

void add(int a[2][2],int b[2][2],int m,int n)
{
  int i,j;
for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void compare(int a[2][2],int b[2][2],int m,int n)
{
int i,j;
for(i=0;i<=m-1;i++)
{
	for(j=0;j<=n-1;j++)
	{
	if(a[i][j]!=b[i][j])
	{
		return 0;
	}
	
		}
	}
	return 1;
}
void addmatrix(int c[2][2], int a[2][2], int b[2][2],int m,int n)
{
	int i, j;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void multiplicasion(int a[2][2],int b[2][2],int c[2][2],int m,int n,int r)
{
	int i,j,k;
		for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			for(k=0;k<=r-1;k++)
			{
	c[i][k]=c[i][k]+ a[i][j]*b[j][k];
		}
}
}
}
void printmatrix(int a[2][2],int m,int n,char name [80])
{
	int i,j;

		printf("\n%4s\n____________\n",name);
for(i=0;i<=m-1;i++)
{
	printf("|");
for(j=0;j<=n-1;j++)
{
printf("%4d",a[i][j]);
}
printf(" | ");
printf("\n");

}
	printf("\n");

}
int main()
{
	int a[2][2]={{1,0},{0,1}};
	int b[2][2]={{3,6},{4,3}};
int c[2][2]={0};
		int m=2,n=2,r=2;
	int i,j,k;
	printmatrix(a,m,n,"Input matrix A");
	printmatrix(b,m,n,"Input Matrix B");
	//printmatrix(c,m,n,"Input Matrix c");	
 multiplicasion(a,b,c,m,n,r);
 add(a,b,m,n);
 printf("\n");

	return 0;
}


