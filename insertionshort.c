#include<stdio.h>
int main()
{
    int a[]={1,2,3,5,4};
    int size=sizeof(a)/sizeof(int);
    int n,i;
    for(i=0;i<=size-1;i++)
    if(a[i]>=a[i+1])
    {
        printf("%d"),a[i];
    }
    return 0;
}