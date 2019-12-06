#include <stdio.h>
int main(){
	char h;
	printf("Nhap ky tu:\n");
	h = getchar();// scanf("%c",&h);
	putchar(h);// printf("%c",h);
	printf("ky tu vua nhap: %c\n",h);
	int x=20;
	if(x>10)
		printf("xin chao\n");
	else
		printf("goodbye\n");
		
    if(x>10){
    	printf("xin chao\n");
    	printf("xin chao\n");
    }else{
    	printf("goodbye\n");
    }

	return 0;
}