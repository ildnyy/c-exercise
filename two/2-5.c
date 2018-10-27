#include <stdio.h>

int main(void)
{
	int  a, b;

	puts("请输入两个整数。");
	printf("整数a："); scanf_s("%d", &a);
	printf("整数b："); scanf_s("%d", &b);

	printf("a的值是b的%f%%。\n",(double)a/ b * 100);

	return  0;

}

