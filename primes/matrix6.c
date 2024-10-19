#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j;
	int r1,c1,r2,c2;
	printf("Enter value of matrix number");
	scanf("%d%d",&r1,&c1);
	printf("Enter value of matrix number");
	scanf("%d%d",&r2,&c2);
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&a[i][j]);
	}
	printf("%d",a[i][j]);
	}
	return 0;
	}
