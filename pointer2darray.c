#include <stdio.h>
int main()
{
    int i,j,*p,arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            p=(*(arr+i)+j);
            printf("%i, ",*p);
        }
    }
    return 0;
}