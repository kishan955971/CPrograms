#include<stdio.h>
//****************************************minus matrix**************************************************************
void minusmatrix(int c[2][2], int a[2][2], int b[2][2],int m,int n)
{
	int i, j;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<i;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
}
//***************************Transpose matrix******************************************************
void transpose(int a[2][2],int m,int n)
{
	int i,j,t;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<i;j++)
		{
  t=a[i][j];
  a[i][j]=a[j][i];
  a[j][i]=t;
		}
		printf("\n");
	}
	printf("\n");
}
//***************************compare matrix***********************************************************
int compare(int a[2][2],int b[2][2],int m,int n)
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
//*******************************addmatrix*************************************************
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
//************************************multiplication***********************************
void multiplication(int a[2][2],int b[2][2],int c[2][2],int m,int n,int r)
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
//***************************************printmatrix*************************************************
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
//***********************************int main************************************************
int main()
{
	int a[2][2]={{1,0},{0,1}};
	int b[2][2]={{3,6},{4,3}};
int c[2][2]={0};
		int m=2,n=2,r=2;
	int i,j,k;
	printmatrix(a,m,n,"Input matrix A");
	printmatrix(b,m,n,"Input Matrix B");
	printmatrix(c,m,n,"Input Matrix c");
	//***************************************call*********************************************************	
 multiplication(a,b,c,m,n,r);
 	printmatrix(c,m,n,"Multiply Matrix result");
		//addmatrix(c,a,b,m,n);
		//printmatrix(c,m,n,"addmatrix");
		//transpose(a,m,n);
		//printmatrix(a,m,n,"transpose");
		//minusmatrix(c,a,b,m,n);
		//printmatrix(c,m,n,"minus");
		//printmatrix(a,m,n,"transpose");
		//int t=compare(a,b,m,n);
		//if(t)
		//printf("true");
		//else
		//printf("false");
		//***********************************************************************************************	
	return 0;
}



