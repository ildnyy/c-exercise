#include <stdio.h>

int main(void)
{
	int A, B;

	puts("请输入两个整数。");
	printf("整数A：");scanf_s("%d", &A);
	printf("整数B：");scanf_s("%d", &B);

	num = (A > B) ? A - B : B - A;

	if (num<=10)
	    puts("它们的差小于等于10");	
	else		
		puts("他们的差大于等于11");


	return 0;
}

