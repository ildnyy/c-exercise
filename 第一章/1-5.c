#include <stdio.h>

int main(void)
{
	int no;
	
	printf("请输入一个整数：");
	scanf_s("%d", &no);

	printf("该整数减去6的结果是%d。\n",no-6);

	return  0;
}
