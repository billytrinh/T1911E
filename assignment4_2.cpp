#include <stdio.h>
int main(){
	int a,b,c;
	do{
		printf("NHap 3 canh:\n");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
	}while(!(a+b>c && a+c>b && b+c>a));//=> a+b <=c || a+c <=b || b+c <=a
	
	return 0;
}