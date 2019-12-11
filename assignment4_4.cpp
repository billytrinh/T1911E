#include <stdio.h>
int main(){
	int n;
	printf("NHap n=\n");
	scanf("%d",&n);
	int n2=0;
	for ( ; n != 0; )
	{
		n2 = n2*10 + n%10;
		n/=10;
	}
	printf("Nghich dao: %d\n",n2);
	return 0;
}