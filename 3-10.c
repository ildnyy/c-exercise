#include <stdio.h>

int main(void)
{
	int A, B, C;

	puts("请输入三个整数。");
	printf("整数A：");scanf_s("%d", &A);
	printf("整数B：");scanf_s("%d", &B);
	printf("整数C：");scanf_s("%d", &C);

	if (A == B && B == C)
	    puts("三个值都相等");
	else if (((A == B) && (B != C)) 
		|| ((B == C) && (B != A))
		|| ((A == C) && (A != B)))		
		puts("有两个值相等。");	
	else		
		puts("三个值各不相同。"); 	
	return 0;
}

