#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    printf("Enter fourth number");
    scanf("%d",&d);

    if(a<b && b<c && b<d)
    {
        printf("%d is the minimum no.",a);
    }
    else if(b<a && b<c && b<d)
    {
        printf("%d is the minimum no.",b);
    }
    else if(c<a && c<b && c<d)
    {
        printf("%d is the minimum no.",c);
    }
    else
    {
        printf("%d is the minimum no.",d);
    }

}
