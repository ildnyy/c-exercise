#include <stdio.h>


int main(void){
	float a;
	double b;
	long double c;

	puts("请依次输入三个浮点数：");
	scanf_s("%f %lf %Lf", &a, &b,&c);
	printf("float型：%f\ndouble型：%f\nlong double型：%Lf", a, b, c);

	return 0;

}
