#include<stdio.h>

int main(){
	int a[10][1000];
	int m, n, x, y;
	int i, j;
	int max=0;

	scanf_s("%d %d %d %d", &m, &n, &x, &y);
	for (i = 0; i < m; i++){
		for (j = 0;j < n;j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 1;i <= m;i++) {
		for (j = 1;j <= n;j++) {
			if (a[i][j] + a[i - 1][j] + a[i][j - 1] + a[i - 1][j - 1] > max) {
				max = a[i][j] + a[i - 1][j] + a[i][j - 1] + a[i - 1][j - 1];
			}
		}
	}
	printf("%d", max);
	return 0;
}