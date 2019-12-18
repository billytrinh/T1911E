#include <stdio.h>
int tinhtong(int a,int b){
	int c;
	c= a+b;
	printf("Tong 2 so: %d\n",c);
	return c;
}
void inramenu(){
	printf("Vui long chon do uong\n");
	printf("1. Cafe\n");
	printf("2. Cacao\n");
	printf("3. Sinh to\n");
}
bool checkgiatri(int t,int q){
	return t>q;
}
// Viết hàm tìm số nghịch đảo của 1 số nguyên
int timnghichdao(int x){
	int n=0;
	for (;x!=0;)
	{
		n = n*10+x%10;
		x/=10;
	}
	return n;//int;
}
int main(){
	int x=20,y=15;
	int z;
	z = tinhtong(x,y);
	int k = tinhtong(77,99);
	
	if(checkgiatri(5,7)){
		printf("Dung roi\n");
	}else{
		printf("Sai roi\n");
	}
	int m = 9863;
	int nd = nghichdao(m);
	printf("nghich dao cua %d la %d\n",m,nd);
	m = 6753;
	printf("nghich dao cua %d la %d\n",m,nghichdao(m));
	return 0;
}