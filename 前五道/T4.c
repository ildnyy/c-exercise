#include <stdio.h>

int main(void)
{
	int a=12,b=36;
	int i,j;

	if (b > a) {
		i = a;
		a = b;
		b = i;
	}
	while ((j = a % b) != 0) {
		a = b;
		b = j;
	}
	printf("a与b的最大公因子是%d\n", b);
		
	return 0;
}