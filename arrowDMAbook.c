#include<stdio.h>
int main()
{
struct book{
    char name[20];
    float price;
    int pages;
};
struct book *ptr,b[5];
int n;
printf("\nEnter the no. of books :\n");
scanf("%d", &n);
int i;
ptr=b;
for(i=0;i<n;i++){
    printf("\nEnter the next book name ,price and pages : \n");
    scanf("%s %f %d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
    printf("%s %.2f %d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
}
return 0;
}