#include <stdio.h>
int main(){
	for (int i = 1; i <=4; ++i)
	{
		printf("Vong thu %d\n",i);
		if(i==2){
			break;
		}
		printf("Ket thuc vong %d\n",i);
	}
	for (int i = 1; i <= 4; ++i)
	{
		printf("Vong thu %d\n",i);
		if(i==2){
			continue;
		}
		printf("Ket thuc vong %d\n",i);
	}
	return 0;
}