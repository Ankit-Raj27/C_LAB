#include <stdio.h>

int main()
{
    int i,item,m[5],pos=-1;

    for(i=0;i<5;i++)
    {
        printf("Enter the data : ");
        scanf("%d", &m[i]);
    }

    printf("\nEnter item to srearch : ");
    scanf("%d", &item);

    for (i = 0; i < 20; i++)
    {
        if (item == m[i])
        {
            pos = i;
            break;
        }
    }
    if(pos == -1)
    {
        printf("\n Item is not present");
    }
    else
    {
         printf("\n Item is present in %d position.", pos);
    }
}