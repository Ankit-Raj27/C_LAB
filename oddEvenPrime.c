#include <stdio.h>

void main()
{
    int i, j, p;
    int m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 27, 18, 19, 20};

    printf("\n Odd Numbers in the given 20 elements are : ");
    for (i = 0; i <= 20; i++)
    {
        if (i % 2 == 1)
            printf("%d ", i);
    }
    printf("\n Even Numbers in the given 20 elements are : ");
    for (i = 0; i <= 20; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    printf("\n Prime Numbers in the given 20 elements are : ");
    for (i = 1; i < 20; i++)
    {
        j = 2;
        p = 1;
        while (j < m[i])
        {
            if (m[i] % j == 0)
            {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1)
        {
            printf("%d ", m[i]);
        }
    }
}