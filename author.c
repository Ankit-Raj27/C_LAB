#include <stdio.h>
int main()
{
    struct book
    {
        char name[25];
        char author[15];
        float price;
        int pages;
    };
    struct book b1, b2, b3;
    int i;

    printf("\nEnter the book name, price and no. of pages of 1st book : \n");
    scanf("%s %s %f %d", b1.name, b1.author, &b1.price, &b1.pages);
    printf("\nEnter the book name, price and no. of pages of 2nd book : \n");
    scanf("%s %s %f %d", b2.name, b2.author, &b2.price, &b2.pages);
    printf("\nEnter the book name, price and no. of pages of 3rd book : \n");
    scanf("%s %s %f %d", b3.name, b3.author, &b3.price, &b3.pages);
  
    if (b1.price > 200)
    {
        printf("\n The author whose book's price is more than 200 is : %s", b1.author);
    }
    if (b2.price > 200)
    {
        printf("\n The author whose book's price is more than 200 is : %s", b2.author);
    }
    if (b3.price > 200)
    {
        printf("\n The author whose book's price is more than 200 is : %s", b3.author);
    }
    return 0;
}