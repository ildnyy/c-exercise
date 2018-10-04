#include <stdio.h>

int main(void)
{
	int  x;

	printf("请输入你的身高："); scanf_s("%d", &x);
	printf("你的标准体重是%.1f公斤。\n",(double)(x-100)*0.9);

	return  0;

}


