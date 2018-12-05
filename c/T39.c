#include<stdio.h>
int main()
{
	int i, m, n, sum, count;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) break;

		count = 0;
		for (i = 1;i <= n;i++) {
			scanf("%d", &m);
			if (m / 100 != 0); count += (m / 100);m %= 100;
			if (m / 50 != 0); count += (m / 50);m %= 50;
			if (m / 10 != 0); count += (m / 10);m %= 10;
			if (m / 5 != 0); count += (m / 5);m %= 5;
			if (m / 2 != 0); count += (m / 2);m %= 2;
			if (m / 1 != 0); count += (m / 1);m %= 1;
		}
		printf("%d\n", count);
	}
	return 0;
}
