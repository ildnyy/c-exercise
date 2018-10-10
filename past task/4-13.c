#include <stdio.h>

int main(void)
{
	int n,i=0;
	int sum=0;
	printf("n的值：");scanf_s("%d", &n);

	while (i <n ) {
		i++;
		sum += i;
	}
	printf("1到%d的和为%d\n", n,sum);
	return 0;
}


