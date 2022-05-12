#include<stdio.h>

int main(){
    int a,b,c,d,small;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter number 2 : ");
    scanf("%d",&b);
    printf("Enter number 3 : ");
    scanf("%d",&c);
    printf("Enter number 4 : ");
    scanf("%d",&d);
    if (a>b){
        if(a>c){
            if(a>d){
                small=d;
            }
            else{
                small=a;
            }
        }
        else{
            if(c>d){
                small=c;
            }
            else{
                small=d;
            }
        }
    }
    else{
        if (b>c){
            if(b>d){
                small=d;
            }
            else{
                small=b;
            }
        }
        else{
            if(c>d){
                small=d;
            }
            else{
                small=c;
            }
        }
    }
    printf("2nd highest number is  %d : ",small);
    return 0;
}