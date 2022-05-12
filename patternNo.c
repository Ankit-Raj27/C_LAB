#include <stdio.h>
int main()
{
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("%d",i+1);
        for(j=0;j<n-1-i;j++)
        printf("  ");
        for(j=0;j<2*i+1;j++)
        printf("%d",i+1);
    printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<i+1;j++)
        printf(" ");
        for(j=0;j<4-2*i+3;j++)
        printf("%d",4-i);
        for(j=0;j<i+1;j++)
        printf("  ");
        for(j=0;j<4-2*i+3;j++)
        printf("%d",4-i);
    printf("\n");
    }
    return 0;
}