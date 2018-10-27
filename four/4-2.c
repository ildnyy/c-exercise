#include <stdio.h>

int main(void)
{
	int  a,b,min,max;
	int  sum = 0;

	puts("请输入两个整数:");
	printf("整数a:");scanf_s("%d", &a);
	printf("整数b:");scanf_s("%d", &b);

	min = (a > b) ? b : a;
	max = (a > b) ? a : b;
	do {
		sum += min;
		min++;
	} while (min <= max);
	printf("大于等于28小于等于37的所有整数和是%d。\n", sum);
	return  0;
}