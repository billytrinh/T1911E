#include <stdio.h>
#include <iostream>
int main(){
	int x  = 15;
	int *p;
	p = &x;
	std::cout<< x;
	printf("\n");
	std::cout<<&x; 
	printf("\n");
	std::cout<<p;
	printf("\n");
	x+=5;
	printf("x=%d\n",x);
	(*p)+=10;
	printf("x=%d\n",x);
	return 0;
}