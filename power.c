#include <stdio.h>
float product (int i,int j)
{
    int res;
    res = i*j;
    return (res);
}

int main()
{
    int a;
    float b;
    float p;
    printf("\n Enter the two numbers.");
    scanf("%d,%.2f",&a,&b);

    p = product(a,b);
    printf("The product is %f: ",p);
    return 0;
}