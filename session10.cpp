#include <stdio.h>
#include <string.h>
typedef struct sinhvien{
	char name[50];
	int mark;
	char address[100];
	int age;
}sv;
typedef int iii;
int main(){
	int x ;
	x = 10;
	iii y = 20;
	struct sinhvien abc;
	strcpy(abc.name,"levannam");
	printf("Sinh vien abc co ten la: %s\n",abc.name);
	sv sinhvien2;
	sinhvien2.mark = 10;
	printf("sinh vien 2 co diem thi: %d\n",sinhvien2.mark);

	sv t1911e[22];
	// for (int i = 0; i < 22; ++i)
	// {
		printf("Nhap ten\n");
		scanf("%s",t1911e[0].name);
		printf("Nhap diem cho sinh vien %s\n",t1911e[0].name);
		scanf("%d",&t1911e[0].mark);
		printf("Nhap dia chi:\n");
		scanf("%s",t1911e[0].address);
		printf("Nhap tuoi:\n");
		scanf("%d",&t1911e[0].age);
	//}
	for (int i = 1; i < 22; ++i)
	{
		memcpy(&t1911e[i],&t1911e[0],sizeof(struct sinhvien));
	}	

	for (int i = 0; i < 22; ++i)
	{
		printf("%s - %d - %s - %d\n",t1911e[i].name,t1911e[i].mark,t1911e[i].address,t1911e[i].age );
	}
	return 0;
}