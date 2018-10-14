#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf_s("%d", &no);

	while (no-- > 0)
		puts("*");



	return 0;
}


