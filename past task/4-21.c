#include    <stdio.h>
int main(void)  {
	int i, j;
	int a;

	puts("生成一个正方形");
	printf("正方形有几层：");     scanf_s("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a; j++)
		     printf("*");
		printf("\n");	
	}

	return 0;
}