#include <stdio.h>

int sod(int n)
{
return (n/10==0 ? n : n%10 + sod(n/10));
}

int main(){
    int a,s;
    printf("\n Enter the number : ");
    scanf("%d",&a);
    s = sod(a);
    printf("Sum of Digits of %d = %d",a,s);
    return 0;
}