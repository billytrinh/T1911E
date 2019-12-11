#include <stdio.h>
int main(){
	int n;
	printf("NHap n=\n");
	scanf("%d",&n);
	if(n<=1){
		printf("%d Khong phai so nguyen to\n",n);
	}
	if(n==2){
		printf("%d la so nguyen to\n",n);
	}
	int count = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count >2){
		printf("%d Khong phai so nguyen to\n",n);
	}else{
		printf("%d la so nguyen to\n",n);
	}
	return 0;
}