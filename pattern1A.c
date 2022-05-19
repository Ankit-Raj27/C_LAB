#include<stdio.h>
int main()
{
int u=1,v=1;

for(int i=0;i<5;i++){
    for(int j=1;j<=5-i-1;j++){
        printf(" ");
    }for(int k=1;k<=i+1;k++){
        if(i%2==0){
            printf("%d ",u);
            u++;
        }
        else{
            printf("%c ",64+v );
v++;
        }
    }printf("\n");
}
return 0;
}