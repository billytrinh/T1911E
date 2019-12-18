#include <stdio.h>
bool kiemtraSNT(int n){
	if(n <=1){
		return false;
	}else if(n==2){
		return true;
	}
	for (int i = 2; i <= n/2; ++i)
	{
		if(n%i ==0){
			return false;
		}
	}
	return true;
}
int main(){
	int x;
	printf("Nhap x=\n");
	scanf("%d",&x);
	if(kiemtraSNT(x)){
		printf("%d la so nguyen to\n",x );
	}else{
		printf("%d ko phai so nguyen to\n",x );
	}
	for (int i = 0; i < x; ++i)
	{
		if(kiemtraSNT(i)){
			printf("%d la SNT\n",i);
		}
	}
	int a;
	do{
		printf("Nhap so:\n");
		scanf("%d",&a);
	}while(!kiemtraSNT(a));
	return 0;
}