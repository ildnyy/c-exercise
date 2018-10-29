#include<stdio.h>

void  main(void){
	int a[100];
	int i, n;
	int max=0;
	int min = 100;
	double ave,sum=0;

	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		scanf_s("%d", &a[i]);
		sum += a[i];
		if (max<a[i]) {
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
	}
	ave = (sum - min - max) / (n-2);
	printf("%0.2f\n", ave);
	return 0;
}