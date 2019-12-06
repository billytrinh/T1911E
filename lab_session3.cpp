#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a+b>c) && (a+c>b) && (b+c>a)){
		int cv = a+b+c;
		float cv2 = (float)cv/2;
		printf("cv2 = %f\n", cv2);
		float s = sqrt(cv2*(cv2-a)*(cv2-b)*(cv2-c));
		printf("chu vi: %d\n",cv );
		printf("dien tich: %f\n",s);
	}else{
		printf("Khong phai tam giac\n");
	}
	return 0;
}