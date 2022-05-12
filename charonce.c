#include <stdio.h>
void display(int n,char ch){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%c",ch);
    }
    printf("\n");
}
int main(){
    display(2,'a');
    display(4,'b');
    return 0;
}