#include<stdio.h>

int main(void){
	int i=0;
	int n,m;

	scanf_s("%d", &n);
	do {
		if (n % 2 == 0) {
			m = n / 2;
		}
		if (n % 2 != 0) {
			m = (3 * n + 1) / 2;
		}
		n = m;
		i++;
	} while (n != 1);
	printf("%d", i);
		return 0;
}