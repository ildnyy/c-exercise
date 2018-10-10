#include    <stdio.h>
int main(void) {
	int i, j;
	int a, b;

	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：");   scanf_s("%d", &a);

	b = a;
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= i; j++)
			putchar(' ');
		for (j = 1;j <= b * 2 - 1;j++)
			printf("%d", i % 10);
		printf("\n");
		b--;
	}

	return 0;
}