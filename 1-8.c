#include <stdio.h>

int main(void)
{
	int  n1, n2,n3;

	puts("请输入两个整数。");
	printf("整数1："); scanf_s("%d", &n1);
	printf("整数2："); scanf_s("%d", &n2);
	printf("它们的乘积是%d。\n", n1 * n2);

	return  0;

}
