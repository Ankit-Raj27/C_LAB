#include <stdio.h>
int main()
{
    int i, *p1,*p2,a,b ;
    p1 = &a;
    p2=&b;
    printf("Enter the 2 number :");
    scanf("%d %d", p1,p2);

    int sum = *p1 + *p2;
    printf("Sum = %d", sum);
    return (0);
}
    
