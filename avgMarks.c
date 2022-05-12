#include <stdio.h>

int main()
{
    int i, avg, count=0,sum=0,marks[5];
    for (i=0;i<5;i++)
    {
        printf(" Enter marks : " );
        scanf("%d",&marks[i]);
    } 
    for (i=0;i<5;i++)
    {
        sum = sum + marks[i];
        if(marks[i]>89)
            count++;
    }

    avg = sum/5;
    printf("\n Average marks : %d", avg);
    printf("\n Number of student secured O grade : %d", count);
    return 0;
}