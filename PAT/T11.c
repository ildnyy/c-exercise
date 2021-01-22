#include<stdio.h>

int main(void){
	int a[100];
	int i, j;
	int m, n;
	int temp;

	scanf_s("%d %d", &m, &n);
	for (i = 0;i < n;i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0;i < n-1;i++) {
		for (j = 0;j < n - i - 1;j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	if (n > m) {
		for (j = 0;j < m;j++) {
			printf("%d ", a[j]);
		}
	}
	if (n < m) {
		for (j = 0;j < n;j++) {
			printf("%d ", a[j]);
		}
	}
		
		return 0;
}