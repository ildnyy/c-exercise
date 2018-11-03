#include <stdio.h>

int main(void)
{
	int  A,B;

	printf("请输入两个整数");
	printf("整数A:");scanf_s("%d", &A);
	printf("整数B:");scanf_s("%d", &B);

	if (A%B)
		puts("B不是A的约数。");

	return  0;

}


