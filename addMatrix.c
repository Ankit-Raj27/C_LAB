#include <stdio.h>

void main()
{
	int A[3][4],B[3][4],C[3][4],i,j;
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&A[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&B[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			C[i][j]=A[i][j]+B[i][j];
	printf("\nTHE VALUES OF MATRIX C ARE:\n");
	for(i=0;i<3;i++)
        {
		for(j=0;j<4;j++)
			printf("%2d",C[i][j]);
		printf("\n");
	}
}