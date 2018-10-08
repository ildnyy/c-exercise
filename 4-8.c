#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf_s("%d", &no);

	while (no --> 0) 
		putchar('*');

	if(no>=1)
	putchar('\n');
	
		

	return 0;
}

