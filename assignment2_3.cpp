#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so tu ban phim:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem\n");
			}else{
				printf("Phuong trinh vo nghiem\n");	
			}
		}else{
			printf("nghiem phuong trinh: %f\n",(float)-c/b);
		}
	}else{
		int d;
		d = b*b-4*a*c;
		if(d==0){
			float x;
			x = (float)-b/(2*a);
			printf("nghiem phuong trinh: %f\n",x);
		}else{
			if(d > 0){
				float x1,x2;
				x1= (-b+sqrt(d))/(2*a);
				x2 = (-b-sqrt(d))/(2*a);
				printf("Nghiem thu nhat: %f\n",x1);
				printf("Nghiem thu hai: %f\n",x2);
			}else{
				printf("Phuong trinh vo nghiem\n");	
			}
		}
	}
}