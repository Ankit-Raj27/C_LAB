#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = {"Ankit Raj"};
    char mname[strlen(name)];
    int sp = -1;
    for (int i = strlen(name) - 1; i >= 0; i--)
    {
        if (name[i] == ' ')
        {
            sp = i;
            break;
        }
    }
    printf("Length of Surname,Q1 : %d\n", strlen(name) - (sp + 1));
    for (int i = 1; i < strlen(name) - 1; i++)
    {
        if ((int)name[i] == 32)
            name[i] = '0';
    }
    if ((int)name[0] >= 65 && (int)name[0] <= 90)
        name[0] = (char)(((int)name[0]) + 32);
    if ((int)name[strlen(name) - 1] >= 97 && (int)name[strlen(name) - 1] <= 122)
        name[strlen(name) - 1] = (char)(((int)name[strlen(name) - 1]) - 32);

    for (int i = 0; i < strlen(name); i++)
    {
        mname[i] = name[i];
    }
    printf("Name entered, Q2 : %s \n", name);
    printf("New name in reverse order, Q3 :");
    for (int i = strlen(name) - 1; i >= 0; i--)
    {
        printf("%c", mname[i]);
    }
}