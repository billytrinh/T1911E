#include <stdio.h>
int main(){
	int ary[6] = {4,2,6,1,8,0};

	for (int i = 0; i < 5; ++i)
	{
		//  đẩy số lớn về cuối mảng
		for(int j=0;j<6-i-1;j++){
			if(ary[j]>ary[j+1]){
				int tmp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < 6; ++i)
	{
		printf("%d %% \\ \t", ary[i]);
	}

	return 0;
}