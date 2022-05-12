#include <stdio.h>
#include <math.h>
int sum(int ,int);
int main(){
    int n1,n2,res;
    printf("\n Enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    res = sum(n1,n2);
    printf("\n Addition of two no. is:%d",res);
    return 0;
}
int sum(int n1,int n2)
{
     int n3;
     n3 = n1+n2;
     return (n3);
}