#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    if (a == 0)
    {
        printf("The vehicle moves with constant speed.");
    }
    else if (a > 0)
    {
        printf("The vehicle moves with accelerated speed.");
    }
    else
    {
        printf("The vehicle moves with deaccelerated speed.");
    }
    return 0;
}