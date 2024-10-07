#include<stdio.h>
int main()
{
    char* questions={"Q1","Q2"};
    int givennumber=2;
    int correct=2,i;
    for(i=1;i<=2;i++)
    {
    printf("**what is a odd number**");
    printf("\n");
    printf("1.  2,4,6,8,34,56,88,74,36,42,50,58");
    printf("\n");
    printf("2.  24,56,76,88,90,40,56,44,81,10,60");
    printf("\n");
    printf("3.  24,26,28,88,56,78,88,98,92,96,90");
    printf("\n");
    printf("4.  488,44,66,72,22,10,100,46,78,84,86");
    printf("\n");
    printf("Enter value of of correct=");
    scanf("%d",&correct);
    if(correct==givennumber)
    {
        
        printf(" correct ");
        return 0;
    }
    }
    printf("uncorrect");
    printf("\n");
    printf("correct answer (2)");
    printf("**what is a 45 square**")
    scanf("%d",&correct);
    printf("\n");
    printf("1.  2021 ");
    printf("\n");
    return 0;
}