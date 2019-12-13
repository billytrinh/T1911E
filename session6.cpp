#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ary[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&ary[i]);
	}

	int high = ary[0];
	for (int i = 0; i < n; ++i)
	{
		if(ary[i]>high){
			high = ary[i];
		}
	}
	printf("Max = %d\n",high);	

	return 0;
}