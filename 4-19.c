#include <stdio.h>

int main(void)
{
	int n, i,t=0;

	printf("整数值：");scanf_s("%d", &n);

	for (i = 1;i <= n;i++) {
		if (n%i == 0)
			printf("%d\n", i);
		if (n%i == 0)
		t++;
	}
	
	printf("约数有%d个\n",t);
	return 0;
}