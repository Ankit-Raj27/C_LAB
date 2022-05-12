#include<stdio.h>
int power(int n1, int n2)
{
    return(n2==1?n1:n1*power(n1,n2-1));
}
int main()
{
    int p,q,res;
    printf("Enter the number: ");
    scanf("%d%d",&p,&q);
    res=power(p,q);
    printf("The value of %d^%d is:%d " ,p,q,res);
    return 0;
}