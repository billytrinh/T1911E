#include <stdio.h>
#include <stdlib.h>
int main(){
	int *m;
	//m = (int *)malloc(5*sizeof(int));
	m = (int *)calloc(5,sizeof(int));
	for (int i = 0; i < 5; ++i)
	{
		printf("Nhap phan tu %d: \n",i);
		scanf("%d",m+i);
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t", *(m+i));
	}
	m = (int *)realloc(m,10*sizeof(int));
	for (int i = 5; i < 10; ++i)
	{
		printf("Nhap phan tu %d: \n",i);
		scanf("%d",m+i);
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", *(m+i));
	}
	free(m);
	printf("lam gi do ma ko can o nho\n");
	return 0;
}
