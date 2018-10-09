#include    <stdio.h>
int main(void) {
	int i, j;
	int a;

	puts("生成直角在左上方的等腰直角三角形。");
	printf("短边：");   scanf_s("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= i; j++)
			putchar(' ');
		for (j = 0;j <= a - i;j++)
			printf("*");
		printf("\n");
	}

	return 0;
}