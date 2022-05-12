#include <stdio.h>
void display(int n, char ch)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("%c",ch);
    }
}

int main()
{
    int n; char c;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the char to print : ");
    scanf(" %c",&c);
    display(n,c);
}