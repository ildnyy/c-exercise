#include<stdio.h>

void  main(void){
	int a[100],b[100];
	int i, j=0,n;
	int c=1;

	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		scanf_s("%d", &a[i]);
		if (a[i] % 2 != 0) {
			b[j] = a[i];
			c = b[j]*c ;
			j++;
		}
	}
	printf("%d\n", c);

	return 0;
}