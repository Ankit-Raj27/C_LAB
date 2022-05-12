#include <stdio.h>
int main()
{
    int score,sum_score=0,i=1;
    float avg_score;
    player:
    printf("\nEnter the score of next player : ");
    scanf("%d",&score);
    sum_score+=score;
    i++;
    if(i<=11)
    {
        goto player;
    }
    avg_score=sum_score/11.0;
        printf("Total score : %d and Average Score : %.2f", sum_score,avg_score);


    return 0;
}