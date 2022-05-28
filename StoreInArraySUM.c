#include <stdio.h>
int main()
{
    FILE* fp ;
    int a[10],i,sum=0;
    fp=fopen("file1.txt","r");
    for(i=0;i<10;i++)
    {
        fscanf(fp,"%d",&a[i]);
        sum += a[i];
    }
    fclose(fp);
    printf("SUM = %d",sum);
    for(i=9;i>=0;i--)
    {
        printf("\n %d", a[i]);
    }
    return 0;
}