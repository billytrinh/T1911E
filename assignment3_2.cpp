#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	if(n>=2&&n<=7){
		printf("Day la thu %d\n",n);
	}else if(n==8){
		printf("Day la chu nhat\n");
	}else{
		printf("Khong phai ngay trong tuan\n");
	}

	char h = 'y';
	switch(n){
		case 2: {
			printf("Day la thu hai\n");break;
		}
		case 3: printf("Day la thu ba\n");break;
		case 4: printf("Day la thu tu\n");break;
		case 5: printf("Day la thu nam\n");break;
		case 6: printf("Day la thu sau\n");break;
		case 7: printf("Day la thu bay\n");break;
		case 8: printf("Day la chu nhat\n");break;
		default: printf("khong phai ngay trong tuan\n", );
	}

	return 0;
}
