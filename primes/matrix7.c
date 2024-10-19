#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j;
	printf("Enter value of number");
	scanf("%d%d",&r1,&c1);
	printf("Enter value of number");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\n matrix are not multiplication");
		exit (0);
	}
	printf("\n Enter matrix 1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
		printf("\n Enter matrix 2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
}
printf("%d",b[i][j]);
	printf("%d",a[i][j]);
	printf("\n");
	return 0;
}
