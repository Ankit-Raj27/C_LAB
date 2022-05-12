#include <stdio.h>

int prime(int x);
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num );
    prime(num);
}

int prime(int x)
{
    int a;
    for(a=2;a<=x;a++)
    {
        if(x%a==0)
        {
            printf("%d, ",a);
            x=x/a;
            a--;
        }
    }
}