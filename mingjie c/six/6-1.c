#include <stdio.h>

int min2(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}

int main(void) {

	int i, j;

	puts("请输入两个整数。");
	printf("整数1：");scanf_s("%d", &i);
	printf("整数2：");scanf_s("%d", &j);

	printf("较小的整数是%d。\n", min2(i, j));

	return 0;
}
