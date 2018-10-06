#include <stdio.h>

int main(void)
{
	int  A, B, C,min;

	puts("请输入三个整数");
	printf("整数A："), scanf_s("%d", &A);
	printf("整数B："), scanf_s("%d", &B);
	printf("整数C："), scanf_s("%d", &C);

	min = A;
	if (B < min) min = B;
	if (C < min) min = C;
	printf("最小值是%d。\n", min);


	return  0;
}

