#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("请输入两个整数。");
	printf("整数1：");scanf_s("%d", &n1);
	printf("整数2：");scanf_s("%d", &n2);

	(n1 == n2) ? puts("它们相等。") :puts("它们不相等。");

	return 0;

}


