#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c = 5, i, r, sum = 0, j, (*ptr)[c], sum2 = 0;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    ptr = (int(*)[c])malloc(r * c * sizeof(int));
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the elements at row %d and column %d : ", i, j);
            scanf("%d", &ptr[i][j]);
            sum += ptr[i][j];
            if (j == c - 1)
            {
                sum2 += ptr[i][j];
            }
        }
    }
    printf("\n The sum of all element is %d : ", sum);
    printf("\n The sum of last column element is %d : ", sum2);
}