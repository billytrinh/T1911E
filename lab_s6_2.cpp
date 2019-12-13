#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap ary[%d]\n",i);
		scanf("%d",&ary[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		if(ary[i]%2!=0){
			printf("%d\n",ary[i]);
		}
	}
	return 0;
}