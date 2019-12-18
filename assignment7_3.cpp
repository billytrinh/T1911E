#include <stdio.h>
int main(){
	int A[4][3],B[4][3],T[4][3],H[4][3];
	for (int i = 0; i < 4; ++i)
	{
		for(int j=0;j<3;j++){
			printf("A[%d][%d] = \n", i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for(int j=0;j<3;j++){
			printf("B[%d][%d] = \n", i,j);
			scanf("%d",&B[i][j]);
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for(int j=0;j<3;j++){
			T[i][j] = A[i][j]+B[i][j];	
			H[i][j] = A[i][j]-B[i][j];	
		}
	}
	printf("Ma tran tong:\n");
	for (int i = 0; i < 4; ++i)
	{
		for(int j=0;j<3;j++){
			printf("%d\t", T[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran hieu:\n");
	for (int i = 0; i < 4; ++i)
	{
		for(int j=0;j<3;j++){
			printf("%d\t", H[i][j]);
		}
		printf("\n");
	}
	return 0;
}