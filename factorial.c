#include <stdio.h>

int factorial(int n)
{
    return (n==1 ? 1 : n*factorial(n-1));
}



int main()
{
    int a,fact;
    printf("\n Enter the number : ");
    scanf("%d",&a);
    fact = factorial(a);
    printf(" Factorial value is : %d",fact);
    return(0);
}