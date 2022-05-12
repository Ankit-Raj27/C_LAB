#include <stdio.h>
int main(){
    float P,Q,R,S;
    printf("Enter the resistance value of P:\n");
    scanf("%f",&P);
    printf("Enter the resistance value of Q:\n");
    scanf("%f",&Q);
    printf("Enter the resistance value of R:\n");
    scanf("%f",&R);
    printf("Enter the resistance value of S:\n");
    scanf("%f",&S);
    if (P*S==Q*R)
    {
        printf("Its a balaced whwatstone bridge\n");
    }
    else{
        printf("It's not a balanced wheatstone bridge");
    }
    return 0;
}