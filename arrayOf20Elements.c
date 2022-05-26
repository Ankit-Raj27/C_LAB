#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n =20,i,*ptr,sum=0;
    ptr = (int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            *(ptr+i) =i;
            sum += *(ptr+i);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }
    printf("\nThe sum is %d. ",sum);
}