#include<stdio.h>
int main()
{
    int a[5];
    int size=sizeof(a)/sizeof(int),i;
    int left=0,right=size-1;
    for(i=0;i<=4;i++)
    {
    printf("Enter value of number=");
    scanf("%d",&a[i]);
    }
    while (left<right)
    {
      if(a[left]!=a[right])
      {
        printf("Not palindrome");
        return 0;
      }
      left++;
      right--;
    }
    printf("Palindrome");
return 0;    
}