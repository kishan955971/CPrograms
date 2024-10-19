#include<stdio.h>
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



//********************************************************************Add**********************
int main()
{
	int a[2][2]={{1,0},{2,4}};
	int b[2][2]={{6,8},{4,3}};
int c[2][2]={0};
		int m=2,n=2,r=2;
	int i,j,k;
	printmatrix(a,m,n,"Input matrix A");
	printmatrix(b,m,n,"Input Matrix B");
//	addmatrix(c,a,b,m,n);
	printmatrix(c,m,n,"After adding");
	
	multiplicasion(a,b,c,m,n,r);
	

		printf("\n");
		

	printmatrix(c,m,n,"multiplicasion C");
	return 0;
}


