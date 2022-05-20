#include <stdio.h>
int main()
{
    struct book {
        char name[20];
        float price;
        int pages;
    };
    struct book b1,b2;

    printf("\nEnter the book name, price and no. of pages of 1st book : \n");
    scanf("%s %f %d",b1.name, &b1.price, &b1.pages);
    printf("\nEnter the book name, price and no. of pages of 2nd book : \n");
    scanf("%s %f %d",b2.name, &b2.price, &b2.pages);
    printf("\nAnd this is what you entered : ");
    printf("\n %s %.2f %d", b1.name,b1.price, b1.pages);
    printf("\n %s %.2f %d", b2.name,b2.price, b2.pages);
    return 0;
}