#include <stdio.h>

int sqr(int x)
{
	return x*x;
}
int pow4(int x)
{
	return sqr(x)*sqr(x);
}

int main(void) {

	int i;

	puts("请输入一个整数。");
	printf("整数i：");scanf_s("%d", &i);

	printf("整数i的四次幂是%d。\n", pow4(i));

	return 0;
}
