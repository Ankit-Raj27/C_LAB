#include <stdio.h>

int main()
{
    int i, j, r, c, a[10][10], count = 0;

    printf("\n Please Enter Number of r and c  :  ");
    scanf("%d %d", &i, &j);

    printf("\n Please Enter the Matrix Elements \n");
    for (r = 0; r < i; r++)
    {
        for (c = 0; c < j; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }

    printf("\n Entered matrix  : \n");
    for (r = 0; r < i; r++)
    {
        for (c = 0; c < j; c++)
        {
            printf("%d \t ", a[r][c]);
        }
        printf("\n");
    }

    for (r = 0; r < i; r++)
    {
        if (a[r][r] % 2 == 1)
        {
            count++;
        }
    }

    printf("\n Total no of odd no is =  %d", count);

    return 0;
}