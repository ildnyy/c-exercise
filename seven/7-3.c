#include <stdio.h>

#include <math.h>
unsigned rrotate(unsigned x, int n) {
	unsigned int i;
	i=x >> n;
	return i;
}

unsigned Irotate(unsigned x, int n) {
	unsigned int i;
	i=x << n;
	return i;
}

int main(void){

	unsigned int n;
	int i;

	printf("输入n:");
	scanf_s("%d", &n);
	printf("输入左移位数i:");
	scanf_s("%d", &i);
	printf("%u 左移 %d = %u\n", n,i , Irotate(n,i));

	printf("输入n:");
	scanf_s("%d", &n);
	printf("输入右移位数i:");
	scanf_s("%d", &i);
	printf("%u 右移 %d 位= %u\n", n, i, rrotate(n, i));
	

	return 0;
}
