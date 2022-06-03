#include <stdio.h>

int main(){
    struct student{
        int marks;
        int rollno;
    };

    struct student s[5];

    for (int i = 0; i < 5; i++)
    {
        struct student *ptr = &s[i];
        printf("\nEnter [rollno,marks] student %d:    ",i+1);
        scanf("%d%d",&ptr->rollno,&ptr->marks);
    }
    
    printf("Total mark of 5 students are:   ");
    int sum_total=0;
    for (int i = 0; i < 5; i++)
    {
        sum_total+=s[i].marks;
    }
    printf("%d",sum_total);
    
    printf("Average marks of 5 student is %f",(float)sum_total/5);

    return 0;
}