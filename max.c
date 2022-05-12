#include <stdio.h>

int main()
{
    int a;
    a = find_max;
    printf("\n Max is %d",a);
    printf("\n Max is %d", find_max(15));

    a = count_leader(20);
    printf("\n No. of leaders are %d",a);
    printf("\n No. of leaders are %d",count_leader(10));
    return 0;
}