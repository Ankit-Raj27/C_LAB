#include <stdio.h>

int fun(int a,int b,int c, int d, int e,int avg);
{
    int sum;
    sum = a+b+c+d+e;
    avg = sum/5;
    printf("\n Sum : ", sum);
    printf("\n Average : ",avg);
}

int main()
{
    int a;int b;int c; int d; int e;int sum;int avg;
    printf("\n Enter a : ");
    scanf("%d", &a);
    printf("\n Enter b : ");
    scanf("%d", &b);
    printf("\n Enter c : ");
    scanf("%d", &c);
    printf("\n Enter d : ");
    scanf("%d", &d);
    printf("\n Enter e : ");
    scanf("%d", &e);

    int x;
    x =fun();
    printf("%d", x);
    return(0);
}