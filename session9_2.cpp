#include <stdio.h>
#include <string.h>
int main(){
	char s1[50],s2[50];
	printf("Nhap chuoi 1:\n");
	scanf("%s",s1);
	printf("Nhap chuoi 2:\n");
	scanf("%s",s2);
	printf("So sanh s1 vs s2: %d\n",strcmp(s1,s2));
	printf("Vi tri cua ky tu h trong s1:%lu\n",strchr(s1,'h')-s1);
	strcat(s1,s2);
	strcat(s2,s1);
	strcpy(s1,s2);
	printf("Do dai chuoi s1: %lu\n",strlen(s1));
	printf("Chuoi 1: %s\n",s1);
	printf("Chuoi 2: %s\n",s2);

	return 0;
}