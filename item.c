#include <stdio.h>
int main()
{
    int i, item, m[3],pos =-1;
    printf("\nEnter item: ");
    scanf("%d", &item);
    // printf("\nitem: ");
    for(i=0;i<3;i++)
    {
        printf("\nENter data: ");
        scanf("%d", &m[i]);
        // printf("\n date: ");
    }
    for(i=0;i<3;i++)
    {
        if(item==m[i])
        {
            pos = i;
            break;
        }
    }
    if(pos==-1)
        printf("\nItem is not present");
    else
        printf("\nItem is present in position %d", pos);
}