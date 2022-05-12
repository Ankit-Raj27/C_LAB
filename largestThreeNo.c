#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter 1st number:");
    scanf("%d \n",&num1);
    printf("Enter 2nd number:");
    scanf("%d \n",&num2);
    printf("Enter 3rd number:");
    scanf("%d \n",&num3);
    if (num1>num2 && num1>num3)
    {
        printf("Largest number is:%d: \n",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("Larhest number is:%d:\n",num2);
    }
    else{
        printf("Largest number is:%d:\n",num3);
    }
    return 0;
}