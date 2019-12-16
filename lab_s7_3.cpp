#include <stdio.h>
int main(){
	int ary[11]={1,2,3,-7,100,2,-6,3,4,5,6}
	int count = 0,max_count=0;
	for (int i = 0; i < 11; ++i)
	{
		if(ary[i]>0){
			count++;
			if(count > max_count){
				max_count = count;
			}
		}else{
			count=0;
		}
	}
	printf("max: %d\n",max_count);
	return 0;
}