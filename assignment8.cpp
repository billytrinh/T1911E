#include <stdio.h>
// 1.
bool timkiem(int x,int a[],unsigned int n){
	for (int i = 0; i < n; ++i)
	{
		if(x == a[i]){
			return true;
		}
	}
	return false;
}
int timsotrongdayfibo(int n){
	if(n<1) return 0;
	if(n<3) return 1;
	if(n==3) return 2;
	int x1=1,x2=1,x3=2;
	for (int i = 4; i <= n; ++i)
	{
		x1= x2;
		x2=x3;
		x3=x1+x2;
	}
	return x3;
}
int timhangmax(int a[][4]){
	int max,hang=0;
	for (int i = 0; i < 4; ++i)
	{	
		int total = 0;
		for (int j = 0; j < 4; ++j)
		{
			total+= a[i][j];
		}
		if(i==0){
			max = total;
		} 
		if(total > max){
			max = total;
			hang = i;
		}
	}
	return hang;
}

int main(){
	int x= 20,ary[5] = {1,20,3,4,5};
	if(timkiem(x,ary,5)){
		printf("Tim thay trong mang\n");
	}else{
		printf("Khong tim thay\n");
	}
	printf("So thu 12 trong day FIBO: %d\n",timsotrongdayfibo(12));
	int a[4][4] = {1,5,2,5,2,63,7,1,3,5,73,5,3,6,5,22};
	printf("Hang co tong lon nhat: %d\n",timhangmax(a));
	return 0;
}