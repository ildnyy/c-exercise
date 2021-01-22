#include<stdio.h>

int main(void) {
	int a[100][100];
	int i, j;
	int T;

	scanf_s("%d", &T);
	for (i = 0;i < T; i++) {
		for (j = 0;j < 3;j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0;i < T;i++) {
		if (a[i][0] + a[i][1] > a[i][2]) {
			printf("Case #%d:ture\n", i + 1);
		}
		else
			printf("Case #%d:fales\n", i + 1);
	}

	return 0;
}