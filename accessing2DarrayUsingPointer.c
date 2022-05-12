#include <stdio.h>
int main()
{
    int a[4][5];
    int (*ptr)[5];
    // pointer to 5 elemtns integer

    // ptr = &a;         //Not true
    ptr = a;            //a is address to 5 integer
    
}