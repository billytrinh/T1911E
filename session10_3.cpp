#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct book{
	char b_name[100];
	char author[100];
	float price;
}book;
int main(){
	int n=3;
	book *ptr;
	ptr = (book *)malloc(n*sizeof(book));
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap ten sach:\n");
		scanf("%s",(ptr+i)->b_name);
		printf("Nhap tac gia:\n");
		scanf("%s",(ptr+i)->author);
		printf("Nhap gia tien:\n");
		scanf("%f",&((ptr+i)->price));
	}
	printf("In ra danh sach\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%s - %s - %f\n",(ptr+i)->b_name,(ptr+i)->author,(ptr+i)->price);
	}
	ptr = (book *)realloc(ptr,2*n*sizeof(book));
	return 0;
}