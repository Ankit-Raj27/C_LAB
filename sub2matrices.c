#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], sum[2][2] = {}, i, j;

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    printf("Matrix A : \n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix B : \n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {
            printf("%d  ", b[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }

    // adding two matrices
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {
            sum[i][j] = a[i][j] - b[i][j];
        }

    // printing the result
    printf("\nSubtraction of two matrices, A-B : \n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {
            printf("%d  ", sum[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }

    return 0;
}