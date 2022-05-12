#include <stdio.h>

int main()
{
    int i, j, a[4][5] = {
    {1, 1, 1, 1, 1}, 
    {2, 2, 2, 2, 2}, 
    {3, 3, 3, 3, 3},
    {4, 4, 4, 4, 4}
    },
     b[4] = {0, 0, 0, 0};                               // assign value to array a
    int(*pa)[5], *pb;
    pa = a;
    pb = b;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            b[i] = b[i] + a[i][j];
        }
        printf("%d ", b[i]);
    }

    return 0;
}