#include <stdio.h>

void display(int n)
{
    int i = 0;
    while (i<n)
    {
        printf("=");
        i++;
    }
}

int main()
{
    int num;
    printf("Enter the number of times you want '=' to repeat: ");
    scanf("%d",&num);
    display(num);

    return 0;
}