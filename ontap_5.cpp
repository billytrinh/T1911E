#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	for (int i = 2; i < n; ++i)
	{
		int so_luong_uoc_cua_i = 0;
		for (int j = 1; j <= i; ++j)
		{
			if(i%j==0){
				so_luong_uoc_cua_i++;
			}
		}
		if(so_luong_uoc_cua_i == 2){
			printf("SNT: %d\n",i);
		}
	}
	return 0;
}