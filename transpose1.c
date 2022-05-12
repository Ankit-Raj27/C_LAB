#include <stdio.h>
int main()
{
    int a[4][4], t;

    // asssigning elements to the matrix
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Data for row no %d and col no %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered matrix: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ", a[i][j]);
            if (j == 4 - 1)
                printf("\n");
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i]=t;
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ", t);
            if (j == 3)
                printf("\n");
        }
    }
}