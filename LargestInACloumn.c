#include <stdio.h>

int main()
{
    int a[4][4] = {
        {1, 2, 7, 3},
        {2, 3, 5, 12},
        {3, 9, 4, 2},
        {1, 2, 9, 4}};

    int i = 0, j = 0;
    int largest = 0;
    int b[4];
    while (j < 4)
    {
        for (i = 0; i < 4; i++)
        {
            if (a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
        b[j] = largest;
        largest = 0;
        j++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Largest element in column %d is %d \n", i + 1, b[i]);
    }

    return 0;
}