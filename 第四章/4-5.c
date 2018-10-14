#include <stdio.h>

int main(void)
{
	int no,i;

	printf("请输入一个正整数：");
	scanf_s("%d", &no);

	i = 1;
	while (i <= no) {
		printf("%d ", i++);
	}
	if (no >= 0) 
		printf("\n");
	
		

	return 0;
}

