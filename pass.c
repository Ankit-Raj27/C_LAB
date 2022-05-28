#include <stdio.h>
int main()
{
    int p,c,m,e,b,per;
    printf("Enter marks of 5 sub : ");
    scanf("%d %d %d %d %d ", &p,&c,&m,&e,&b);
    per = (int)(p+c+m+e+b)/5;
    if(per >=60)   
        printf("First");
    else
    {
        if( 60<per<=50)
            printf("Second");
        else
        {
            if(50<per<=40)
                printf("Third");
            else
                printf("Fail");
        }
    }
}