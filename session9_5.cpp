#include <stdio.h>
int main(){
	int ary[5] = {1,2,3,4,5};
	printf("phan tu index 2: %d\n",ary[2]);
	printf("phan tu index 2: %d\n",*(ary+2));
	/*
		ary <=> &ary[0]
		*ary <=> ary[0]
		ary+3 <=> &ary[3]
		*(ary+4) <=> ary[4]
	*/
	return 0;
}