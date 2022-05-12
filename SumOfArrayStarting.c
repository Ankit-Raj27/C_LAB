// Sum of first n elements starting from a fixed position 

#include <stdio.h>
int large_sum(int *a,int *b,int n)
{
    // a = x+5 ; b = y+5 ; n=4;
    int i ,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        s1+=a[i];
        s2+=b[i];
    }
    if(s1==s2)
        return 0;
    else if(s1>s2)
        return 1;
    else
        return 2;
}

int main()
{
    int x[5],y[6],g,i;
    printf("\n Enter number of first array : ");
    for(i=0; i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Enter number of second array : ");
    for(i=0; i<6;i++)
    {
        scanf("%d",&y[i]);
    }

    g = large_sum(x+5,y+5,4);
    if(!g)
    {
        printf("Both sums are equal");
    }
    else if(g==1)
    {
        printf("\n x is greater than y");
    }
    else
        printf("\n y is greater than x");
}