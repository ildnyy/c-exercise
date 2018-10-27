#include <stdio.h>
int factorial(int n) {
	int i;
	int j=1;
	for (i = 1;i <= n;i++)
		j *= i;
	return j;
}

int main(void) {
	int n;
	printf("输入一个正整数：\n");
	scanf_s("%d", &n);
	printf("%d的阶乘为：%d\n",n, factorial(n));
	
	return 0;
}
