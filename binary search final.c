#include<stdio.h>
int main()
{
    int a[]={1,4,6,7,8,9};
    int size=sizeof(a)/sizeof(int);
    int i,count=0;
    for(i=0;i<=size-1;i++)
    {
        //if(count==a[i])
            count=count+1;

            printf("%d%d",count,a[i]);
    }
    return 0;
}