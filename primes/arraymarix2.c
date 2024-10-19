#include<stdio.h>
void addmatrix(int c[2][2],a[2][2],b[2][2],int m,int n)
{
	for(i=0;i<=m-1;i++)
{
	for(j=0;j<=n-1;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
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
	printf("------------\n");
	printf("\n");

}

int main()
{
	int a[2][2]={{1,0},{0,1}};
	int b[2][2]={{2,3},{4,5,}};
//	int c[2][2]={0};
	int c[2][2]={0};
		int m=2,n=2,r=2;
	int i,j,k;
	printmatrix(a,m,n,"Input matrix A");
	printmatrix(b,m,n,"Input Matrix B");
	//printmatrix(c,m,n,"C");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			for(k=0;k<=r-1;k++)
	c[i][k]=c[i][k]+ a[i][j]*b[j][k];
		}
//		printf("\n");
}

//	printf("\n");
}
//	printf("%d",c[i][j]);
addmatrix(c,m,n,a,b);
	printmatrix(c,m,n,"Multipllication product C");
	return 0;
}
