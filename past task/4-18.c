#include <stdio.h>

int main(void)
{
	int n, i;

	printf("显示多少个*：");scanf_s("%d", &n);

	for (i = 1;i <= n;i++) {
		printf("*");
		if (i % 5 == 0)
			printf("\n");
	}
	printf("\n");
	return 0;
}