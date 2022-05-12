#include <stdio.h>
int main()
{
    int p,c,m,e,b,prcnt;
    printf("Enter the marks in Physics : ");
    scanf("%d",&p);
    printf("Enter the marks in Chemistry : ");
    scanf("%d",&c);
    printf("Enter the marks in Maths : ");
    scanf("%d",&m);
    printf("Enter the marks English : ");
    scanf("%d",&e);
    printf("Enter the marks in Biology : ");
    scanf("%d",&b);

    prcnt=(int)(p+c+m+e+b+4.9)/5;
    if (prcnt>=60)
    {
        printf("First division");
    }
    else if (prcnt>=50)
    {
        printf("Secon division");
    }
    else if (prcnt>=40)
    {
        printf("Third division");
    }
    else
        printf("Fail");
    return 0;
}