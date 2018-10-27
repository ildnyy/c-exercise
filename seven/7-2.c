#include <stdio.h>

#include <math.h>

int main(void){

	unsigned int n;
	int i;

	printf("输入n:");
	scanf_s("%d", &n);
	printf("输入左移位数i:");
	scanf_s("%d", &i);
	printf("%u 左移 %d = %u\n", n,i , n << i);
	printf("%u 乘以2的指数幂%d\n", n,(int) (n*pow(2,i)));

	printf("输入n:");
	scanf_s("%d", &n);
	printf("输入右移位数i:");
	scanf_s("%d", &i);
	printf("%u 右移 %d 位= %u\n", n,i , n >> i);
	printf("%u 除以2的指数次幂 = %d\n", n,  (int)(n / pow(2, i)));

	return 0;
}
