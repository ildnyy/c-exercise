#include <stdio.h>

int sumup(int n)
{
	int a;
	int x=0;
	for (a = 1;a <= n;a++)
		x += a;
	return x;
}

int main(void) {
	int n;

	printf("整数n：");scanf_s("%d", &n);
	printf("1到%d的和是%d。\n",n, sumup(n));

	return 0;
}
