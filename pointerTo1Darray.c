// address of 5 ie first index of arr
// b = *(b+2)   is the address of 8 ie 3rd index of arr
//b is address variable
// a constant can be replaced equivalent variable but a variable cant be replaced with eq constant
//arr[2] can be written as b[2] 

#include <stdio.h>

int main()
{
    int arr[6] = {5,9,8,3,0,1};           // &arr = 5 9  8 3 0 1
    int *b;                               // &b = address of int
    // b = &arr     - not accepetd
    b = arr;    
    for (int i=0;i<6;i++)
    {
        printf("%d, ",b[i]);
    }
    return 0;
}

