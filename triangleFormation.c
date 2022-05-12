#include <stdio.h>
int main (){
    int x1,y1,x2,y2,x3,y3,m1,m2,m3;
    printf("Enter coordinates of first point:");
    scanf("%d %d \n",&x1,&y1);
    printf("Enter coordinates of second point:");
    scanf("%d %d \n",&x2,&y2);
    printf("Enter coordinates of third point:");
    scanf("%d %d \n",&x3,&y3);

    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    m3 = (y1-y3)/(x1-x3);

    if (m1==m2 && m2==m3 && m3==m1)
    {
        printf("Triangle will not be formed as 2 lines are parallel");
    }
    else {
        printf("Triangle formation is possible");
    }
    return 0;
}