#include<stdio.h>
void compare(int a[2][2],int b[2][2],int m,int n){

int i,j;

	for(i=0;i<=m-1;i++)
{
	for(j=0;j<=n-1;j++)
	{
	if(a[i][j]!=b[i][j])
	{
		printf("EQUAL MATRIX = NO");
		return ;
	}
	
		}
	}
	printf("EQUAL MATRIX = ");
	printf("YES");
}

int main()
{
	int a[2][2]={{9,9},{9,9}};
	int b[2][2]={{9,9},{9,9}};
	int m=2,n=2;
	compare(a,b,m,n);
	return 0;
}
