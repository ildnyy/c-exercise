#include<stdio.h>

void adjust_point(int *n){
	if (*n < 0) {
		*n = 0;
	}
	if (*n > 100) {
		*n = 100;
	}
}
int main(void) {
	int a;

	scanf_s("%d", &a);
	adjust_point(&a);
	printf("%d", a);

	return 0;
}
