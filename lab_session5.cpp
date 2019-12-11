#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	for (int i = 0; i <= n; ++i)
	{
		// Tim nghich dao cua i
		int i2 = 0;
		for (int j=i ;j!=0;j/=10 )
		{
			i2 = i2*10+j%10;
		}
		printf("so nghich dao: %d\n",i2);
	}
	return 0;
}