#include <stdio.h>
void  inrasoletrongmang(int a[],unsigned int n){
	for (int i = 0; i < n; ++i)
	{
		if(a[i]%2!=0){
			printf("so le: %d\n",a[i]);
		}
	}
}

void sapxepmang(int a[],unsigned int n){
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(a[j]> a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}
void inmang(int a[],unsigned int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t",a[i] );
	}
	printf("\n");
}
int main(){
	int ary[5] = {4,2,6,1,7};
	inmang(ary,5);
	sapxepmang(ary,5);
	inmang(ary,5);
	//inrasoletrongmang(ary,5);
	return 0;
}