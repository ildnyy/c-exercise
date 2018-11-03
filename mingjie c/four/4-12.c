#include <stdio.h>

int main(void)
{
	int no,i=0;
	
	do {
		printf("请输入一个正整数：");
		scanf_s("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);
	printf("%d位数是",no);
	while (no > 0) {
		no /= 10;
		i++;
	}
	printf("%d", i);
	puts("。");
	return 0;
}


