#include <stdio.h>

int main(void)
{
	int  A, B, C,D,max;

	puts("请输入四个整数");
	printf("整数A："), scanf_s("%d", &A);
	printf("整数B："), scanf_s("%d", &B);
	printf("整数C："), scanf_s("%d", &C);
	printf("整数D："), scanf_s("%d", &D);

	max = A;
	if (B > max) max = B;
	if (C > max) max = C;
	if (D > max) max = D;
	printf("最大值是%d。\n", max);


	return  0;
}

