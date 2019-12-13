#include <stdio.h>
int main(){
	int x =20,y=10;
	BACK:printf("Quay lai\n");
	if(x>y){
		goto XY;
	}else{
		goto YX;
	}
	
	XY:printf("X lon hon Y\n");
	YX:printf("Y lon hon X\n");

	return 0;
}