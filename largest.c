#include <stdio.h>
// Function Definition
int find_max (int n)
{
    int next_num, largest=0,i;
    for (i=0;i<n;i++)
    {
        printf("\n Enter the number : ");
        scanf("%d",&next_num);
        if(next_num > largest)
            largest = next_num;
    }
    return (largest);
}

int count_leader(int n)
{
    int next_num,leader = 0,i,count=0;
    for (i=0;i<n;i++)
    {
        printf("\n Enter the next number : ");
        scanf("%d",&next_num);
        if(next_num > leader)
        {
            leader=next_num;
            count++;
        }
    }
    return (count);
}


int main()
{
    int a;
    a = find_max(10);
    printf("\n Max is %d",a);
    printf("\n Max is %d", find_max(15));

    a = count_leader(20);
    printf("\n No. of leaders are %d",a);
    printf("\n No. of leaders are %d",count_leader(10));
    return 0;
}