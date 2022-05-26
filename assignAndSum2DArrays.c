#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i,j, sum = 0;
    int(*a)[5];
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    a = (int(*)[5])malloc(n*5*sizeof(int));
    printf("Enter elements of %d x5 matrix : ", n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;++j)
        {
            scanf("%d",&a[i][j]);
            sum +=a[i][j]; 
        }
    }
    printf("\nSum : %d", sum);
    return 0;
}