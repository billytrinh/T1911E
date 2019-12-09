#include <stdio.h>
int main(){
	int count = 10;
	while(count<10){
		printf("Chay voi while\n");
		count++;
	}
	do{
		printf("Chay voi do-while\n");
		count++;
	}while(count<10);

	int n;
	do{
		printf("nhap 1 so tu 2 den 8 n=\n");
		scanf("%d",&n);
	}while(n<2||n>8);

	char h;
	do{
		printf("Yes or NO (y/n)?\n");
		scanf("%c",&h);
	}while(h!='y'&& h!='n');

	return 0;
}