#include <stdio.h>
int main()
{
    int givenanswer;
    int correctanswer = 3;
    printf("What is capital of india?");
    printf("\n");
    printf("1. lakhanou");
    printf("\n");
    printf("2. panjab");
    printf("\n");
    printf("3. new delhi");
    printf("\n");
    printf("4. Error");
    while (1)
    {
 
        printf("\nPlease choose a number between 1 and 4\n");
        scanf("%d", &givenanswer);
        if (givenanswer < 1 || givenanswer > 4)
        {
            printf("error");
            continue;
        }
        break;
    }
    if (correctanswer == givenanswer)
    {
        printf("right");
    }
    else
        printf("error");

    return 0;
}