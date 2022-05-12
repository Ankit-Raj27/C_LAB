#include <stdio.h>

void add_mat_row(int(*pa)[5],int *pb)
{
    //pa points to 5 elements integer, pb points to single integer
    int i,j;
    for(i = 0 ; i<4 ; i++)
    {
        pb[i] = 0;
        for(j=0;j<5;j++)
            pb[i] = pb[i] + pa[i][j];
    }
}

void main()
{
    int i,x[4][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}},y[4];
    add_mat_row(x,y);

    for(i=0;i<4;i++)
        printf("%d ", y[i]);
}