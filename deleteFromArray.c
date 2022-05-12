#include <stdio.h>
int main()
{
    int a,arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter the element to be deleted : ");
    scanf("%d",&a);
    for ( int i = a - 1 ; i < 9 ; i++ ) 
        arr[i] = arr[i+1];        
        
        printf("Resultant array : \n");
        
        for( int i = 0 ; i < 9 ; i++ )        
        printf("%d, ", arr[i]);        
    return 0;
}