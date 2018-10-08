#include <stdio.h>

int main(void)
{
	int n,i=1;

	printf("请输入一个整数：");scanf_s("%d", &n);

	while (i <=n ) {
		printf("%d", i % 10);
		i++;
	}
	printf("\n");
	return 0;
}


