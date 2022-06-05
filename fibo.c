#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int sum(int a_sum, int b_sum)
{
    int sum = 0;
    sum = a_sum + b_sum;
    return sum;
}

int main()
{
    int roll;
    printf("Enter the roll number ");
    scanf("%d", &roll);
    int m = roll % 10 + 1;
    int n = roll % 5 + 11;
    int f1 = fib(m);
    int f2 = fib(n);
    int s = sum(f1, f2);
    printf("mth Fibonacci = %d\n", f1);
    printf("nth Fibonacci = %d\n ", f2);
    printf("SUM from mth to nth fibonacci is %d\n", s);
    return 0;
}