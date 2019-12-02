#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a=\n");
	scanf("%d",&a);
	printf("Nhap b=\n");
	scanf("%d",&b);
	if(a>b){
		printf("%d lon hon %d\n",a,b);	
	}else{
		if(a == b){
			printf("%d bang %d\n",b,a);
		}else{
			printf("%d lon hon %d\n",b,a);
		}
	}
}
