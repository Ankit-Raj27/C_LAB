#include <stdio.h>
int main()
{
    char *p[5];
    char a[] = "Yudhistir", b[] = "Bhim", c[] = "Arjun", d[] = "Nakul", e[] = "Sahadev";
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    p[4] = e;

    printf("%s \n", p[0]);
    printf("%s \n", p[1]);
    printf("%s \n", p[2]);
    printf("%s \n", p[3]);
    printf("%s \n", p[4]);

    return 0;
}