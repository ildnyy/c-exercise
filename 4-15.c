#include <stdio.h>

int main(void)
{
	int a,b,c;

	printf("开头数值（cm）：");scanf_s("%d", &a);
	printf("结束数值（cm）：");scanf_s("%d", &b);
	printf("间隔数值（cm）：");scanf_s("%d", &c);

	while (a <=b ) {
		printf("%dcm      %.2fkg\n", a,0.9*(a-100));
		a += c;
	}
	printf("\n");
	return 0;
}


