#include <stdio.h>
void inmatran(int a[][4],unsigned int n){
	for (int i = 0; i <n ; ++i)
	{
		for(int j=0;j<4;j++){
			printf("%d\t",a[i][j] );
		}
		printf("\n");
	}
}	
int main(){
	int ary[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	inmatran(ary,3);
	return 0;
}