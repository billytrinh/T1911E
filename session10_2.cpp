#include <stdio.h>
#include <string.h>
typedef struct book{
	char b_name[100];
	char author[100];
	float price;
}book;
int main(){
	book arrs[20];
	int n=;
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap ten sach:\n");
		scanf("%s",arrs[i].b_name);
		printf("Nhap tac gia cua sach %s\n", arrs[i].b_name);
		scanf("%s",arrs[i].author);
		printf("gia sach:\n");
		scanf("%f",&arrs[i].price);
	}
	for (int i = 0; i < n-1; ++i)
	{
		for(int j=0;j<n-i-1;j++){
			if(arrs[j].price > arrs[j+1].price){
				book tmp;
				memcpy(&tmp,&arrs[j],sizeof(book));
				memcpy(&arrs[j],&arrs[j+1],sizeof(book));
				memcpy(&arrs[j+1],&tmp,sizeof(book));
			}
		}
	}
	printf("Gia tang dan:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%s - %s - %f\n",arrs[i].b_name,arrs[i].author,arrs[i].price);
	}

	for (int i = 0; i < n-1; ++i)
	{
		for(int j=0;j<n-i-1;j++){
			if(strcmp(arrs[j].b_name,arrs[j+1].b_name)>0){
				book tmp;
				memcpy(&tmp,&arrs[j],sizeof(book));
				memcpy(&arrs[j],&arrs[j+1],sizeof(book));
				memcpy(&arrs[j+1],&tmp,sizeof(book));
			}
		}
	}
	printf("Alphabe:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%s - %s - %f\n",arrs[i].b_name,arrs[i].author,arrs[i].price);
	}
	return 0;
}