#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	char arrs[n][50],s[50];	
	printf("nhap %d chuoi vao\n",n );
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap chuoi thu %d:\n", i);
		scanf("%s",arrs[i]);
	}
	printf("Nhap chuoi can tim:\n");
	scanf("%s",s);
	int i=0;
	for (i = 0; i < n; ++i)
	{
		if(strcmp(s,arrs[i])==0){
			printf("%s nam trong mang\n",s);
			break;
		}
	}
	if(i>=n){
		printf("%s khong nam trong mang\n",s);	
	}
	return 0;
}