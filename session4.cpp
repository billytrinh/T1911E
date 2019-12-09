#include <stdio.h>
int main(){
	double s;
	int l,n;
	printf("Nhap so tien khach muon gui:\n");
	scanf("%lf",&s);
	printf("Nhap lai suat nam nay:\n");
	scanf("%d",&l);
	printf("NHap so nam muon gui lai\n");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		s += s*l/100;
		i++;
	}
	printf("So tien cuoi cung nhan duoc: %lf\n",s);
	return 0;
}