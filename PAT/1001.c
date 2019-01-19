#include<stdio.h>
int main() {
	int i = 0;
	int n, m;

	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 == 0) {
			m = n / 2;
		}
		if (n % 2 != 0) {
			m = (3 * n + 1) / 2;
		}
		n = m;
		i++;
	}
	printf("%d\n", i);
	return 0;
}
