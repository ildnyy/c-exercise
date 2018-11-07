#include<stdio.h>

int main(void){
	int a[100];
	int i,j;
	int n;
	int min=10000,temp;

	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		scanf_s("%d", &a[i]);
		if (min > a[i]) {
			min = a[i];
			j = i;
		}
	}
	temp = a[0];
	a[0] = min;
	a[j] = temp;
	
	for (i = 0;i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}