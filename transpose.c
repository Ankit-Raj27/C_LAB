#include <stdio.h>
int main()
{
    int a[4][4], transpose[4][4], r = 4, c = 4;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Data for row no %d and col no %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");   
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    }
    return 0;
}