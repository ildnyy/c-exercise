#include <stdio.h>

int main(void)
{
	int     a;
	double  b;

	printf("请输入第一个实数："); scanf_s("%d",  &a);
	printf("请输入第二个实数："); scanf_s("%lf", &b);
	printf("你输入的第一个实数是%d。\n", a);
	printf("你输入的第二个实数是%f。\n", b);
	printf("a*b=%d\n", a*b);

	return  0;

}

