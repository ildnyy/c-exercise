#include <stdio.h>

int sqr(int x)
{
	return x*x*x;
}

int main(void) {

	int i;

	puts("请输入一个整数。");
	printf("整数i：");scanf_s("%d", &i);

	printf("整数i的立方是%d。\n", sqr(i));

	return 0;
}
