#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int x1=1,x2=1,x3=2;
	for (; x2+x3 <= n ; )
	{
		x1 = x2;
		x2 = x3;
		x3 = x1+x2;
	}
	printf("So can tim: %d\n",x3);
	return 0;
}