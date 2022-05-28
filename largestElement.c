#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i =0,n;
    float *data;
    printf("Enter total no. of elements (1-100) : ");
    scanf("%d",&n);
    data=(float*) calloc(n,sizeof(float));
    printf("\nEnter the number %d : ", i+1);
    for (i=0; i<n ; i++)
    {
        scanf("%f", data+i);
    }
    for(i=1;i<n;i++)
    {
        if(*data<*(data+i))
            *data=*(data+i);
    }
    printf("Largest number : %.2f",*data);
    free(data);
    return 0;
}
