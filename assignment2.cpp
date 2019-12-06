#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so tu ban phim:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b){
		// dung
		if(a > c){
			printf("So lon nhat: %d\n",a);
		}else{
			printf("so lon nhat: %d\n",c);
		}
	}else{
		//sai
		if(b>c){
			printf("so lon nhat: %d\n",b);	
		}else{
			printf("So lon nhat: %d\n",c);	
		}
	}
}