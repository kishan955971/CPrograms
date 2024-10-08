#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(a)/sizeof(int);
    int pos;
    printf("Enter value of number=");
    scanf("%d",&pos);
    if(pos<1||pos>size)
    {
        printf("error");

    }
    else
    printf("%d",a[pos]);
    return 0;
}