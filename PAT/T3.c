#include <stdio.h>

int main(void)
{
	int b,a=3;
	int i,j;

	b = a;
	for (i = 1;i <=a;i++) {
		for (j = 1;j <= i;j++)
			putchar(' ');
		for (j = 1;j <=b*2-1 ;j++)
			printf("*");
		printf("\n");
		b--;
	}
	int c = 2;
	for (i = 1;i <= c;i++) {
		for (j = 1;j <=c-i+1;j++)
			putchar(' ');
		for (j = 1;j <= i*2+1;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}