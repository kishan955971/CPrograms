#include<stdio.h>
int main()
{
    int a[]={1,2,4,8,9};
    int size=sizeof(a)/sizeof(int);
   int searchvalue=9;
   int left=0,right,mid;
   while (1)
   {
    mid=(left+right)/2;
    if(searchvalue==a[mid])
    {
        printf("%d found at %d",seatchvalue,mid);
        return 0;
    }
    }

  
   
  return 0;
}