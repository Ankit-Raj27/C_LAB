#include <stdio.h>

int fibonacci(int n)
{
    // if(n==1)
    // {return 1};
    // else(n==2) 
    //     {return 1};
    // else{
    //     return (fibonacc(n-1) + fibonacci(n-2))
    // }

    return (n==1 || n==2 ? 1:fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
    int a,fib;
    printf("\n Enter the number : ");
    scanf("%d",&a);
    fib = fibonacci(a);
    printf(" Fibonacci series is : %d",fib);
    return(0);
}