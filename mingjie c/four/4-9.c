#include <stdio.h>

int main(void)
{
	int no,i=1;

	printf("请输入一个正整数：");
	scanf_s("%d", &no);

	while (no >= i) {
		if (i % 2)
			putchar('+');
		else
			putchar('-');
		i++;
	}
	
	return 0;
}

