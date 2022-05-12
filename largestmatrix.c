#include<stdio.h>
int main()
{
    int m[3][3], i, j, max;
    printf("Enter elements in matrix : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &m[i][j]);
    }
    max = m[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max<m[i][j])
                max = m[i][j];
        }
    }
    printf("\nLargest Element = %d", max);
    return 0;
}