#include <stdio.h>
#define g 10
int main(){

float u,t;
printf("Enter the speed(in m/s):\n");
scanf("%f",&u);
printf("Enter the time(in seconds):\n");
scanf("%f",&t);

float s=(u*t)+(0.5*g*t*t);
printf("displacement=%f ",s);

return 0;

}