#include <stdio.h>
int main()
{
    struct book {
        char name[20];
        float price;
        int pages;
    };
  
    struct book b1 = {"K richie", 130.50, 550};
    struct book *ptr ;
    ptr = &b1;
    printf("\n %s", ptr->name);
    printf("\n %.2f", ptr->price);
    printf("\n %d", ptr->pages);
    
    return 0;
}