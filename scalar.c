#include<stdio.h>
 
int main()
{
 	int i=4, j=4, r, c, matrix[4][4], N;
  
 	printf("\n Please Enter the Matrix Elements \n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0;c < j;c++)
    	{
      		scanf("%d", &matrix[r][c]);
    	}
  	}

   
 	printf("\n Please Enter the scalar Value to be multiplied  :  ");
 	scanf("%d", &N);
 	  
    printf("\n Entered matrix  : \n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		printf("%d \t ", matrix[r][c]);
    	}
    	printf("\n");
  	}

 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		matrix[r][c] = N * matrix[r][c];    
   	 	}
  	}



 	printf("\n The Result of a Scalar Matrix multiplication is : \n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		printf("%d \t ", matrix[r][c]);
    	}
    	printf("\n");
  	}
 	return 0;
}