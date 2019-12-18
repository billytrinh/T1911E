#include <stdio.h>
int main(){
	int ary[4][4];
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j<4; ++j)
		{
			printf("ary[%d][%d] = \n",i,j);
			scanf("%d",&ary[i][j]);
		}
	}

	int total = 0;
	int total2 = 0;
	for (int i = 0; i < 4; ++i)
	{
		for(int j=0;j<4;j++){
			if(i==j){
				total+=ary[i][j];
			}
			if(i+j==3){
				total2 += ary[i][j];
			}
		}
	}
	printf("TB duong cheo 1 : %f\n",(float)total/4);
	printf("TB duong cheo 2 : %f\n",(float)total2/4);
	return 0;
}