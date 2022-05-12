#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n=5,b,i,j;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1-i ; j++)
        printf(" ");
        for ( j = 0; j < 2*i+1 ; j++)
        printf("$");
        for ( j = 0; j < n-1-i ; j++)
        printf(" ");
        for ( j = 0; j < n-1-i ; j++)
        printf(" ");
        for ( j = 0; j < 2*i+1 ; j++)
        printf("$");

    printf("\n");
        
        
    }
    
    return 0;
}