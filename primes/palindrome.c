#include<stdio.h>
int main()
{
	int a[5];
	int left=0,right=size-1;
	for(i=0;i<=4;i++)
	{
		printf("Enter value of number=");
		scanf("%d",&a[i]);
	}
	while(left<right)
	{
		if(a[left]!=a[right])
		{
			printf("not palindrome");
			return 0;
		}
		left++;
		right--;
	}
	printf("palindrome");
	return 0;
}
