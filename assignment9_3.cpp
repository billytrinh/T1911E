#include <stdio.h>
#include <string.h>
int main(){
	char arrs[5][50];	
	printf("nhap 5 chuoi vao\n" );
	for (int i = 0; i < 5; ++i)
	{
		printf("Nhap chuoi thu %d:\n", i);
		scanf("%s",arrs[i]);
	}
	for (int i = 0; i < 5-1; ++i)
	{
		for (int j = 0; j < 5-i-1; ++j)
		{
			if(strcmp(arrs[j],arrs[j+1]) > 0){
				char tmp[50];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],tmp);
			}
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%s\n", arrs[i]);
	}
	return 0;
}