#include <stdio.h>
int main()
{
    double num,sum=0;
    do
    {
        printf("Enter nuymber : ");
        scanf("%lf ",&num);
        sum += num;
    } while(num!=0);
        printf("\nWum = %0.2lf",sum);
        return 0;
}