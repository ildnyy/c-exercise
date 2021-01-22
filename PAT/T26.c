#include<stdio.h>
int main() {
	int m, n;
	int a, b,c;

	scanf_s("%d %d", &m, &n);
	a = m;
	b = n;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d", m*n / a);
	return 0;
}
