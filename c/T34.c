#include <stdio.h>

int main() {
	int n;
	int a, b, c, d;
	int num1=0, num2=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if (b == a + c && d != a + c) {
			num1++;
		}
		if (b != a + c && d == a + c) {
			num2++;
		}
	}
	printf("%d %d", num2, num1);
	return 0;
}
