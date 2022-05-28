#include <stdio.h>
int main()
{
    int ch;
    FILE *ptr ;
    ptr =fopen("file1.txt", "r");

    while((ch=fgetc(ptr))!=EOF);
    {
    printf("%c", ch);   
    }
    return 0;
}