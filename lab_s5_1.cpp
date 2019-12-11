#include <stdio.h>
int main(){
	for (int i = 1; i <= 12; ++i)
	{
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 4; ++i)
	{
		printf("|");
		for (int j = 0; j < 6; ++j)
		{
			printf("+");
		}
		printf("|\n");
	}

	return 0;
}