#include <stdio.h>
#include <string.h>
void daonguoc(char s[]){
	char s2[strlen(s)];
	for (int i = 0; i < strlen(s); ++i)
	{
		s2[i] = s[strlen(s)-i];
	}
	strcpy(s,s2);
}
void inhoa(char s[]){
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[i] >=97 && s[i]<=122){
			s[i] -=32;
		}
	}
}
int main(){
	char s[50];
	printf("Nhap chuoi:\n");
	scanf("%s",s);
	char s2[50];
	for (int i = (strlen(s)-1); i >= 0; --i)
	{
		if(s[i]>=97 && s[i]<=122){
			s2[(strlen(s)-1)-i] = s[i]-32;
		}else{
			s2[(strlen(s)-1)-i] = s[i];
		}
	}
	printf("dao nguoc va in hoa: %s\n",s2 );
	return 0;
}