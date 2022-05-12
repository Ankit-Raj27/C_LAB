#include <stdio.h>

int main()
{
    int Size, i, j, a[4][5] = {{1, 2, -3, -4, 5}, {2, -2, -2, 2, 2}, {3, 3, -3, 3, 3}, {4, 4, -4, -4, -4}}, b[20];
    int pos_count = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] >= 0)
            {
                b[i] =a[i][j];
                pos_count++;
                printf("%d ", b[i]);
            }
        }
        
    }
    
    printf("\n Total Number of Positive Numbers in this Array = %d ", pos_count);
    return 0;
}