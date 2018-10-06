#include <stdio.h>

int main(void)
{
	int     a,c;
	double  b,d;
	c = 6;
	d = 8;

	printf("请输入第一个实数："); scanf_s("%d", &a);
	printf("请输入第二个实数："); scanf_s("%lf", &b);
	printf("你输入的第一个实数是%d。\n", a);
	printf("你输入的第二个实数是%f。\n", b);
	printf("a*b=%f\n", a*b);
	printf("a/b=%f\n", a / b);
	printf("a*c=%d\n", a*c);

	return  0;

}

