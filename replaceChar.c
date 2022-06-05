#include <stdio.h>

int main()
{
    int i;
    char name[] = {"Ankit Raj"};
    char new_name[20];
    for(i=0;i<name.length;i++)
    {
        
        printf("%c", name[i]);
    }
    return 0;
}