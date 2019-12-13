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
	int max,min;
	max = min = ary[0];
	for (int i = 0; i < n; ++i)
	{
		if(max < ary[i]){
			max = ary[i];
		}
		if(min > ary[i]){
			min = ary[i];
		}
	}
	int n_max,n_min;
	n_max = n_min = ary[0];
	for (int i = 0; i < n; ++i)
	{
		if(ary[i]<max){
			n_max = ary[i];
			break;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(ary[i]>min){
			n_min = ary[i];
			break;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(n_max < ary[i] && ary[i] < max){
			n_max = ary[i];
		}
		if(n_min > ary[i] && ary[i]> min){
			n_min = ary[i];
		}
	}
	printf("n_max = %d, n_min = %d\n",n_max,n_min);
	return 0;
}