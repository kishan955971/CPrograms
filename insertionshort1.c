#include<stdio.h>
int main()
{
    int a[]={1,4,5,2,3};
    int size=sizeof(a)/sizeof(int);
    int i;
    int j;
    int pos;
    for(i=0;i<=size-1;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<=size-1;i++)
    {
        pos=a[i];
        for(j=i-1;j>=0; && pos<[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=pos;
    }
    for(i=0;i<=size-1;i++)
    printf("%d",a[i]);
    return 0;
}