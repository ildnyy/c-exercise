#include <stdio.h>

int main(void)
{
	int  no;

	printf("请输入一个整数:");
	scanf_s("%d", &no);

	if (no > 0)
		printf("绝对值是%d。\n",no);
	else if (no < 0)
	    printf("绝对值是%d。\n", -no);


	return  0;
}

