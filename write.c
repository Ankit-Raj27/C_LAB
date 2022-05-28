#include <stdio.h>
int main()
{
    FILE *fp ;
    int i,a[10] = {2,4,6,8,10,3,5,7,9,0};
    fp=fopen("file2.txt","w");
    for(i=0;i<10;i++)
    {
        fprintf(fp,"%d ",a[i]);
    }
    fclose(fp);
    return 0;
}