#include <stdio.h>
int main()
{
    char username = "a";
    char username1;
    int password=12345;
    int password1;
    printf("Enter the username : ");
    scanf("%c",&username1);
    printf("Enter the password : ");
    scanf("%d",&password1);
    if(password==password1)
    {
        printf("Login succesfull");
    }
    else
    {
        printf("Login un-successfull");
    }
}