#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the number\n");
    scanf("%f", &a);
    int k = a;
    b = (a - k);
    if (b >= 0.5)
    {
        k++;
    }
    printf("The answer is : %d", k);
    return 0;
}