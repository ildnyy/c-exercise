#include <stdio.h>

int min2(int a, int b,int c) {
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int main(void) {

	int i, j,k;

	puts("请输入三个整数。");
	printf("整数1：");scanf_s("%d", &i);
	printf("整数2：");scanf_s("%d", &j);
	printf("整数3：");scanf_s("%d", &k);

	printf("最小的整数是%d。\n", min2(i, j,k));

	return 0;
}
