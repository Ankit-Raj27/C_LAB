#include <stdio.h>
int main()
{
    int *p1,*p2,a,b;
    p1=&a;
    p2=&b;

    printf("Enter the 2 numbers : ");
    scanf("%d %d",*p1,*p2);
    if(*p1>*p2)
    {
        printf("\n%d is greater than %d", *p1,*p2);
    }
    else{
        printf("\n%d is greater than %d", *p2,*p1);
    }
    return 0;
}