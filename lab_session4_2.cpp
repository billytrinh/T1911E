#include <stdio.h>
int main(){
	int s=0;
	for (int count = 0, number=0; count < 100; number++)
	{
		if(number%2!=0){
			s+=number;
			++count;
		}
	}
	printf("s = %d\n",s);
	return 0;
}