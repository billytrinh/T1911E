#include <stdio.h>

int main(){
	int n;
	float s = 0;
	printf("n = \n");
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		s+= (float)1/i;
	}
	printf("S= %f\n",s);
	return 0;
}