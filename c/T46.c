#include <stdio.h>
int main() {
	int N, i, num, a[40] = { 0 }, sum, count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &num);
		for (sum = 0; num; num = num / 10)
			sum += num % 10;
		if (a[sum] == 0) {
			a[sum] = 1;
			count++;
		}
	}
	printf("%d\n", count);
	for (i = 1; i < 37; i++)
		if (a[i])
			printf("%d%c", i, --count ? ' ' : '\0');

	return 0;
}

