#include <stdio.h>

int main()
{
    int i;
    char name[] = {"ANKIT"};

    for(i=0;i<5;i++)
    {
        ++name[i];
        printf("%c", name[i]);
    }
    return 0;
}