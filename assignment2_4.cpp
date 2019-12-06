#include <stdio.h>
int main(){
	int x,y;
	printf("Nhap x=\n");
	scanf("%d",&x);
	printf("Nhap y=\n");
	scanf("%d",&y);
	int tmp;
	tmp=x;
	x=y;
	y=tmp;
	printf("Sau khi doi x= %d va y= %d\n",x,y);
	
	return 0;
}