#include <stdio.h>
int main(){
	int m,d;
	printf("Nhap thang:\n");
	scanf("%d",&m);
	printf("Nhap ngay:\n");
	scanf("%d",&d);
	int day_of_year;
	switch(m){
		case 1: day_of_year = d;break;
		case 2: day_of_year = d+31;break;
		case 3: day_of_year = d+31+28;break;
		case 4: day_of_year = d+31+28+31;break;
		case 5: day_of_year = d+31+28+31+30;break;
		case 6: day_of_year = d+31+28+31+30+31;break;
		case 7: day_of_year = d+31+28+31+30+31+30;break;
		case 8: day_of_year = d+31+28+31+30+31+30+31;break;
		case 9: day_of_year = d+31+28+31+30+31+30+31+31;break;
		case 10: day_of_year = d+31+28+31+30+31+30+31+31+30;break;
		case 11: day_of_year = d+31+28+31+30+31+30+31+31+30+31;break;
		case 12: day_of_year = d+31+28+31+30+31+30+31+31+30+31+30;break;
	}
	printf("Ngay trong nam: %d\n",day_of_year);
	if(day_of_year%7==0){
		printf("Ngay chu nhat \n");
	}else{
		printf("Ngay thu %d\n",day_of_year%7);
	}

	return 0;
}
