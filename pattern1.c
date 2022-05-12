#include <stdio.h>
int main()
{
    int i,j,n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<n-(2*i)+3;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<n-2*i+3;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<n-2*i+3;j++)
        printf(" ");
    printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<n-(2*i)+3;j++)
        printf("$");
        for(j=0;j<2*i+1;j++)
        printf(" ");
        for(j=0;j<n-(2*i)+3;j++)
        printf("$");
        for(j=0;j<2*i+1;j++)
        printf(" ");
        for(j=0;j<n-(2*i)+3;j++)
        printf("$");
        for(j=0;j<2*i+1;j++)
        printf(" ");
    printf("\n");
    }
    return 0;
}