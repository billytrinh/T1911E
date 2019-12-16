#include <stdio.h>
int main(){
	int temp[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d\t",temp[i][j]);
		}
		printf("\n");
	}
	// int tmp[3] ;
	// tmp = temp[0];
	// for (int i = 0; i < 3; ++i)
	// {
	// 	printf("%d\t", tmp[i]);
	// }
	return 0;
}