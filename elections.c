#include <stdio.h>
#include<string.h>
int main() {
char* parties[]={"BJP","SP","ICP"};

int votes[]={0,0,0};
int n=3,i;
for(i=0;i<=n;i++)
{
printf("%s",parties[i]);
}

    return 0;
}