#include<stdio.h>

int main(void) {
	
	int i,n,j,sum=0;
	int cont[1000] = { 0 };
	
	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		scanf_s("%d", &cont[i]);
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++) {
			if (i != j) {
				sum += cont[i] * 10 + cont[j];
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}