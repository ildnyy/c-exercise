#include <stdio.h>

int main(void)
{
	int  A,B;

	puts("请输入两个整数");
	printf("整数A："), scanf_s("%d", &A);
	printf("整数B："), scanf_s("%d", &B);

	if (A == B)
		puts("A等于B。");
	else if (A < B)
		puts("A小于B。");
	else if (A > B)
		puts("A大于B。");


	return  0;
}

