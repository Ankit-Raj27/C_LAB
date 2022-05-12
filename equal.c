#include <stdio.h>
void display (int n){
    int i;
    for (i=0; i < n; i++)
    {
        printf("=");
    }
    printf("\n");
}
int main(){
    display(10);
    display(15);
    return 0;
}